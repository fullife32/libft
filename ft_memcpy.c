/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:44:15 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/25 17:42:38 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;

	if (!dst || !src)
		return (dst);
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n-- != 0)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
