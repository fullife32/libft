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

	list = *lst;
	if (!lst || !del)
		return ;
	ft_lstiter(*lst, del);
	while (list != NULL)
	{
		free(list);
		list = list->next;
	}
	*lst = NULL;
}
