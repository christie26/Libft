
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	(*f)(lst->content);
	
}
//Turn in files -
//Parameters lst: The address of a pointer to a node.
//f: The address of the function used to iterate on the list.
//Iterates the list ’lst’ and applies the function ’f’ on the content of each node.
