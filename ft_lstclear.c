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
	t_list	*list;
	t_list	*tmp;

	list = *lst;
	if (!lst || !del)
		return ;
	tmp = list;
	while (list != NULL)
	{
		tmp = list;
		list = list->next;
		del((void *)tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
