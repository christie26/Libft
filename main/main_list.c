#include "libft.h"

void	del(void *content)
{
	content = 0;
}

void	print_center(t_list *head)
{
	t_list	*curr;
	int		i = 0;
	
	curr = head;	
	while (curr)
	{
		printf("%dth content is %ld.\n", i, (long)curr->content);
		i++;
		curr = curr->next;
	}
}

void	*f(void	*content)
{
	printf("check2\n");
	void	*new;

	new = (void *)((long)(content) + 1);
	return (new);
}
int	main(void)
{
	// make base linked list
	t_list	*head = malloc(sizeof(t_list));
	head->content = (void *)5;
	t_list	*node1 = malloc(sizeof(t_list));
	head->next = node1;
	node1->content = (void *)10;

	t_list	*node2 = malloc(sizeof(t_list));
	node1->next = node2;
	node2->content = (void *)20;
	node2->next = 0;

	//ft_lstnew
	t_list	*new;
	new = ft_lstnew((void *)30);
	printf("ft_lstnew\n");
	printf("new->content=%ld\n",(long)new->content);
	printf("new->next=%ld\n",(long)new->next);
	printf("\n");	
	
	//ft_lstadd_front
	ft_lstadd_front(&head, new);
	t_list	*curr;
	int	i = 0;
	curr = head;	
	printf("ft_lstaad_front\n");
	while (curr)
	{
		printf("%dth content is %ld.\n", i, (long)curr->content);
		i++;
		curr = curr->next;
	}
	//ft_lstsize
	printf("\nft_lstsize\nsize is %d\n",ft_lstsize(head));	

	//ft_lstlast
	printf("\nft_lstlast\nlast node's content is %ld\n",(long)ft_lstlast(head)->content);

	//ft_lstadd_back
	new = ft_lstnew((void *)40);
	ft_lstadd_back(&head, new);	
	i = 0;
	curr = head;	
	printf("\nft_lstad_back\n");
	while (curr)
	{
		printf("%dth content is %ld.\n", i, (long)curr->content);
		i++;
		curr = curr->next;
	}
	//ft_lstdelone
	ft_lstdelone(head->next, &del);
	printf("\nft_lstdelone\n");
	print_center(head);	

	//ft_lstclear

	//ft_lstiter

	//ft_lstmap
	printf("\nft_lstmap\n");
	t_list	*map;
	map = ft_lstmap(head, &f, &del);
	printf("check\n");
	print_center(map);
	
}
