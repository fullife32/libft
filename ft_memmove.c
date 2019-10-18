/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:01:57 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/17 15:52:56 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len * (dst > src);
	if (dst > src)
	{
		while (i-- > 0)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	else
	{
		while (++i < len)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}
