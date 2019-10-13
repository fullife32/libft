/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:40:15 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/13 04:43:19 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t n;

	i = 0;
	n = 0;
	if (haystack[0] == '\0')
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = i;
		while (needle[n] == haystack[j] && j < len)
		{
			j++;
			n++;
			if (needle[n] == '\0')
				return ((char *)haystack + i);
		}
		n = 0;
		i++;
	}
	return (NULL);
}
