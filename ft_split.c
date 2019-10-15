/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:22:59 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/15 17:47:45 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"






char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	b;
	char **split;

	i = 0;
	j = 1;
	b = 0;
	while (s[i])
	{
		if (s[i] == c && b == 1)
		{
			j++;
			b = 0;
		}
		if (s[i] != c)
			b = 1;
		i++;
	}
	if (!(split = malloc(sizeof(char *) * j)))
		return (0);
	i = 0;
	b = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		j = 0;
		k = i;
		while (s[k] && s[k] != c)
		{
			k++;
			j++;
		}
		if (j > 0)
		{
			if (!(split[b] = malloc(sizeof(char) * (j + 1))))
				return (0);
			j = 0;
			while (s[i] && s[i] != c)
			{
				split[b][j] = s[i];
				i++;
				j++;
			}
			split[b][j] = '\0';
			b++;
		}
	}
	split[b] = 0;
	return (split);
}
