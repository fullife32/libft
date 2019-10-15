/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:44:59 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/15 14:10:33 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	isset(char const *set)
{
	size_t	i;

	i = 0;
	while (
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	char	*str;

	i = ft_strlen(set) - 1;
	end = ft_strlen(s1) - 1;
	while (
	if (end < 0)
	{
		if (!(str = malloc(sizeof(char) * 1)))
			return (0);
		str[0] = '\0';
		return (str);
	}
	if (end != ft_strlen(s1) - 1)
		end++;
	i = 0;
	while (s1[i] && set[i] && s1[i] == set[i])
		i++;
	str = ft_substr(s1, i, end - i + 1);
	return (str);
}
