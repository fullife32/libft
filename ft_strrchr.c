/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:03:52 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/08 15:21:07 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (i == 0 && c == '\0')
		return (s + i);
	while (i >= 0)
	{
		if (s[i] == c)
			return (s + i);
		i--;
	}
	return (NULL);
}
