/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:01:57 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/14 18:42:30 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destin;
	char	*source;
	char	tmp[len];
	size_t	i;

	destin = (char *)dst;
	source = (char *)src;
	i = 0;
	while (i < len)
	{
		tmp[i] = source[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		destin[i] = tmp[i];
		i++;
	}
	return ((void *)destin);
}
