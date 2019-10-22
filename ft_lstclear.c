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
	ft_lstclear(&test1, del);
	printf("\n");
	while (test1 != NULL)
	{
		printf("%s", test1->content);
		test1 = test1->next;
	}
	return (0);
}
