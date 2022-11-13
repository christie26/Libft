
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (!tmp)
		return ;
	while (*lst)
	{
		tmp = lst->next;
		(*del)(lst->content);
		free (lst);
		lst = tmp;
	}
}
