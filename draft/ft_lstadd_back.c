#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;
	t_list	*curr;

	head = *lst;
	curr = *lst;	
	if (!(*lst))
	{
		if (!new)
			return ;
		*lst = new;
		return ;
	}
	while (curr->next)
		curr = curr->next;
	curr->next = new;
	*lst = head;
}
