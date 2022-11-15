
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	new	= malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = (*f)(lst->content);
	(*del)(lst->content);
	return (new);
}


//Parameters 	lst: The address of a pointer to a node.
//				f: The address of the function used to iterate on the list.
//				del: The address of the function used to delete the content of a node if needed.
//Return value 	The new list.
//				NULL if the allocation fails.
//External functs. malloc, free
//Description 	Iterates the list ’lst’ and applies the function
//				’f’ on the content of each node. Creates a new
//				list resulting of the successive applications of
//				the function ’f’. The ’del’ function is used to
//				delete the content of a node if needed.
