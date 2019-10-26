/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:44:15 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/26 12:00:18 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	if (!dst && !src && n > 0)
		return (NULL);
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	while (n-- != 0)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
