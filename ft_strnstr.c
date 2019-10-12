/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:40:15 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/12 16:16:19 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t n;

	i = 0;
	n = 0;
	if (!haystack)
		return (NULL);
	if (needle == NULL)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = i;
		while (needle[n] == haystack[j] && j < len)
		{
			j++;
			n++;
			if (needle[n] == '\0')
				return ((char *)haystack + i);
		}
		n = 0;
		i++;
	}
	return (NULL);
}

int	main(int ac, char **av)
{
	(void)ac;

	printf("%s\n%s\n", ft_strnstr(av[1], av[2], atoi(av[3])), strnstr(av[1], av[2], atoi(av[3])));
	return (0);
}
