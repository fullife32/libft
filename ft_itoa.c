/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:30:45 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/20 11:25:39 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_intcount(unsigned int n)
{
	int i;

	i = 0;
	while (n / 10 > 0)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char			*ft_itoa(int n)
{
	int				i;
	int				neg;
	unsigned int	nn;
	char			*nb;

	neg = 0;
	if (n < 0)
	{
		nn = (unsigned int)n * -1;
		i = ft_intcount(nn) + 1;
		neg = 1;
	}
	else
	{
		nn = n;
		i = ft_intcount(nn);
	}
	if (!(nb = malloc(sizeof(char) * (i + 1))))
		return (0);
	nb[i] = '\0';
	i--;
	if (neg == 1)
	{
		while (i > 0)
		{
			nb[i] = nn % 10 + '0';
			nn = nn / 10;
			i--;
		}
		nb[0] = '-';
	}
	else
	{
		while (i >= 0)
		{
			nb[i] = nn % 10 + '0';
			nn = nn / 10;
			i--;
		}
	}
	return (nb);
}
