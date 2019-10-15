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

char    *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     end;
    char    *str;

    i = ft_strlen(set) - 1;
    end = ft_strlen(s1) - 1;
    while (s1[end] == set[i] && end > 0 && i > 0)
    {
        end--;
        i--;
    }
    i = 0;
    while (s1[i] == set[i] && s1[i] && set[i])
        i++;
    //if (!(str = malloc(sizeof(char) * (end - i + 1))))
    //    return (0);
    str = ft_substr(s1, i, end - i);
    return (str);
}
