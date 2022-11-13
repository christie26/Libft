
int	ft_lstsize(t_list *lst)
{
	int	cnt;

	cnt = 0;
	while(lst->next && lst)
	{
		lst = lst->next;
		cnt++;
	}
	return (cnt);
}
