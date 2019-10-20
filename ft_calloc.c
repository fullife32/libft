/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 20:20:13 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/20 14:09:53 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*ptr;

	ptr = NULL;
	i = count * size;
	if (!(ptr = malloc(i)))
		return (0);
	while (i--)
		ptr[i] = '\0';
	return ((void *)ptr);
}
