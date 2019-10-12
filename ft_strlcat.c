/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:17:52 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/12 15:31:34 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!dst || !src)
		return (0);
	while (dst[i] && i < dstsize)
		i++;
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	(void)ac;

	printf("%lu\n%lu\n", ft_strlcat(av[1], av[2], atoi(av[3])), strlcat(av[4], av[5], atoi(av[6])));
	return (0);
}
