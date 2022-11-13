
int	ft_lstsize(t_list *lst)
{
	int	cnt;

	cnt = 0;
	while(lst && lst->next)
	{
		lst = lst->next;
		cnt++;
	}
	return (cnt);
}
