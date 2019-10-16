/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:22:59 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/16 13:14:18 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_leak(char **strsplit, size_t tab)
{
	while (tab >= 0)
	{
		free(strsplit[tab]);
		tab--;
	}
	free(strsplit);
	return (NULL);
}

char	**ft_alloc_split(char const *s, char c)
{
	size_t	i;
	size_t	b;
	size_t	w;
	char	**strsplit;

	i = 0;
	b = 0;
	w = 1;
	while (s[i])
	{
		if (s[i] == c)
			b = 0;
		else if (s[i] != c && b == 0)
		{
			w++;
			b = 1;
		}
		i++;
	}
	if (!(strsplit = malloc(sizeof(char *) * w)))
		return (0);
	return (strsplit);
}

size_t	ft_word_size(char const *s, char c, size_t i)
{
	size_t	size;

	size = 1;
	while (s[i] && s[i] != c)
	{
		i++;
		size++;
	}
	return (size);
}

char	*ft_tab_split(char const *s, char c, size_t i)
{
	size_t	j;
	char	*strsplit;

	j = 0;
	if (!(strsplit = malloc(sizeof(char) * ft_word_size(s, c, i))))
		return (0);
	while (s[i] && s[i] != c)
	{
		strsplit = s[i];
		i++;
		j++;
	}
	strsplit = '\0';
	return (strsplit);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	b;
	size_t	tab;
	char	**strsplit;

	i = 0;
	tab = 0;
	if (!s)
		return (0);
	if ((strsplit = ft_alloc_split(s, c)) == 0)
		return (0);
	b = 1;
	while (s[i])
	{
		if (s[i] != c && b == 1)
		{
			if ((strsplit[tab] = ft_tab_split(s, c, i) == 0))
				return (ft_leak(strsplit, tab));
			b = 0;
			tab++;
		}
		else if (s[i] == c)
			b = 1;
		i++;
	}
	strsplit[tab] = 0;
	return (strsplit);
}
