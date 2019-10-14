/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:51:58 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/14 18:01:20 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*destin;
	unsigned char	*source;
	size_t			i;

	destin = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destin[i] = source[i];
		if (source[i] == c)
			return ((void *)destin + i + 1);
		i++;
	}
	return (NULL);
}
