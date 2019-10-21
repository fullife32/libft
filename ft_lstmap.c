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
	t_list	*list;
	t_list	*first;
	int		i = 0;

	if (!lst || !f || !del)
		return (0);
	while (lst != NULL)
	{
		if (!(list = malloc(sizeof(size_t))))
		{
			ft_lstclear(&first, (*del)(void *)(first->content));
			return (0);
		}
		if (i++ == 0)
			first = list;
		list = (*f)((void *)lst->content);
		list = list->next;
		lst = lst->next;
	}
	return (first);
}
