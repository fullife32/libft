/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:51:58 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/26 10:57:58 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;
	unsigned char	uc;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	uc = (unsigned char *)c;
	while (i < n)
	{
		dest[i] = source[i];
		if (dest[i] == uc)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
