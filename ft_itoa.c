/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:30:45 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/20 15:52:33 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intcount(int n)
{
	int count;

	count = 0;
	if (n < 0)
		n = -n;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	int				count;
	unsigned int	num;
	char			*nb;

	if (n <= 0)
		count = ft_intcount(n) + 1;
	else
		count = ft_intcount(n);
	if (!(nb = malloc(sizeof(char) * (count + 1))))
		return (0);
	nb[count] = '\0';
	num = n < 0 ? -n : n;
	while (count--)
	{
		nb[count] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		nb[0] = '-';
	return (nb);
}
