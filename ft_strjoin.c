/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:44:26 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/15 12:44:30 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    int		i;
    int		j;
    int		s1len;
    int		s2len;
    char	*str;

    i = 0;
    j = 0;
    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    if (!(str = malloc(sizeof(char) * (s1len + s2len + 1))))
        return (0);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return (str);
}
