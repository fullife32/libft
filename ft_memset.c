/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:21:38 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/12 16:47:17 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *bytes;
	size_t i;

	bytes = b;
	i = 0;
	while (i < len)
	{
		bytes[i] = c;
		i++;
	}
	return ((void *)bytes);
}

int	main(int ac, char **av)
{
	(void)ac;

	printf("%s\n%s\n", ft_memset((void *)av[1], av[2][0], atoi(av[3])), memset((void *)av[4], av[5][0], atoi(av[6])));
	return (0);
}
