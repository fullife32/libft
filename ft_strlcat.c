/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:17:52 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/14 19:33:43 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t j;
	size_t dstlen;
	size_t srclen;

	j = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (src[j] && j < dstsize - dstlen - 1)
	{
		dst[dstlen + j] = src[j];
		j++;
	}
	dst[dstlen + j] = '\0';
	return (dstlen + srclen);
}
