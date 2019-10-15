/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:44:59 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/15 12:45:03 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char        *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    char    *str;

    i = 0;
    if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + 1))))
        return (0);
    while (s1[i] == set[i])
    {
        
    }
}
