/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:29:34 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/21 15:29:35 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*list;

	if (!lst || !f || !del)
		return (NULL);
	list = ft_lstnew(f(lst->content));
	first = list;
	lst = lst->next;
	while (lst != NULL)
	{
		if ((list = ft_lstnew(f(lst->content))) == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, list);
		list = list->next;
		lst = lst->next;
	}
	return (first);
}
