/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 20:20:13 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/14 20:48:55 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*ptr;

	ptr = NULL;
	i = size * count;
	if (!(ptr = malloc(i)))
		return (0);
	while (i > 0)
	{
		i--;
		ptr[i] = '\0';
	}
	return ((void *)ptr);
}
