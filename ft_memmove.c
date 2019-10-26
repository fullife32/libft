/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:01:57 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/26 12:00:49 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	unsigned char	temp;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	temp = 0;
	if (dest > source)
	{
		while (len-- != 0)
		{
			temp = source[len];
			dest[len] = temp;
		}
	}
	else
		ft_memcpy(dest, source, len);
	return (dst);
}
