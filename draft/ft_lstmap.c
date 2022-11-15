#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*head;

	head = 0;
	while (lst)
	{
		curr = ft_lstnew((*f)(lst->content));
		if (!curr)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		ft_lstadd_back(&head, curr);
		lst = lst->next;
	}
	return (head);
}
