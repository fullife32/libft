/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:01:57 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/25 17:55:27 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	if (!dst || !src)
		return (dst);
	i = len * (dst > src);
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dst > src)
	{
		while (i-- != 0)
			dest[i] = source[i];
	}
	else if (dst < src)
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}
