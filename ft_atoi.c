/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:45:48 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/07 18:15:32 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 0;
	while (str[i] == '\v' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\f'
			|| str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	if (sign == -1)
		nb = -nb;
	return (nb);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d\n%d\n", ft_atoi(av[1]), atoi(av[1]));
	return (0);
}
