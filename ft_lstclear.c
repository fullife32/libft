/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:08:37 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/21 11:53:28 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*first;
	t_list	*last;

	if (!*lst || !del)
		return ;
	first = *lst;
	while (first != NULL)
	{
		last = ft_lstlast(first);
		(*del)((void *)last->content);
		free(last);
	}
}
