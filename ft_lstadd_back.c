#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst;

	if (!*alst)
	{
		ft_lstadd_front(alst, new);
		return ;
	}
    lst = ft_lstlast(*alst);
	lst->next = new;
}
