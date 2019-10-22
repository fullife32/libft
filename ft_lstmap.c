/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:29:34 by eassouli          #+#    #+#             */
/*   Updated: 2019/10/22 12:21:12 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	del(void *content)
{
	size_t	i;
	char	*contento = (char *)content;

	i = 0;
	while (contento[i])
	{
		contento[i] = '\0';
		i++;
	}
}

void	*f(void *content)
{
	size_t	i = 0;

	while (((char *)content)[i])
	{
		if (((char *)content)[i] >= 'a' && ((char *)content)[i] <= 'm')
			((char *)content)[i] += 13;
		else if (((char *)content)[i] >= 'n' && ((char *)content)[i] <= 'z')
			((char *)content)[i] -= 13;
		i++;
	}
	return (content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*list;

	if (!lst || !f)
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

int		main()
{
	t_list	*tmp;
	t_list	*test1;
	t_list	*test2;
	t_list	*test3;
	char	content1[] = "salut ";
	char	content2[] = "bg ";
	char	content3[] = "de la night";

	test1 = ft_lstnew((void *)content1);
	test2 = ft_lstnew((void *)content2);
	test3 = ft_lstnew((void *)content3);
	ft_lstadd_back(&test1, test2);
	ft_lstadd_back(&test1, test3);
	tmp = test1;
	while (tmp != NULL)
	{
		printf("%s", tmp->content);
		tmp = tmp->next;
	}
	ft_lstmap(test1, *f, del);
	tmp = test1;
	printf("\n");
	while (tmp != NULL)
	{
		printf("%s", tmp->content);
		tmp = tmp->next;
	}
	return (0);
}