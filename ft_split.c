/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:22:59 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/17 16:45:00 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_leak(char **split, size_t tab)
{
	while (--tab > 0)
		free(split[tab]);
	free(split);
	return (NULL);
}

char	*ft_sep(char const *s, char c, size_t i)
{
	size_t	l;
	size_t	t;
	char	*split;

	l = i;
	while (s[l] != '\0' && s[l] != c)
		l++;
	if (!(split = malloc(sizeof(char) * (l - i + 1))))
		return (0);
	t = 0;
	while (i < l)
	{
		split[t] = s[i];
		i++;
		t++;
	}
	split[t] = '\0';
	return (split);
}

char	**ft_alloc(char const *s, char c)
{
	size_t	i;
	size_t	b;
	size_t	w;
	char	**split;

	i = 0;
	b = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] == c)
			b = 0;
		else if (s[i] != c && b == 0)
		{
			b = 1;
			w++;
		}
		i++;
	}
	if (!(split = malloc(sizeof(char *) * (w + 1))))
		return (0);
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	tab;
	char	**split;

	if ((split = ft_alloc(s, c)) == 0)
		return (0);
	i = 0;
	tab = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if ((split[tab] = ft_sep(s, c, i)) == 0)
				return (ft_leak(split, tab));
			while (s[i] && s[i] != c)
				i++;
			tab++;
		}
		i++;
	}
	split[tab] = 0;
	return (split);
}

int	main()
{
	size_t	i = 0;
	char	**split = ft_split(" salut ca va ", ' ');

	while (i < 4)
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
