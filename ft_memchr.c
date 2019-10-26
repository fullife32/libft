/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 19:34:22 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/26 11:00:56 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	uc;

	i = 0;
	s1 = (unsigned char *)s;
	c = (unsigned char)c;
	while (i < n)
	{
		if (s1[i] == uc)
			return (s + i);
		i++;
	}
	return (NULL);
}
