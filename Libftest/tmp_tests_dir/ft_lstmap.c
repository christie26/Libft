/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:28:50 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/15 21:28:01 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*curr;

	if (!lst || !f)
		return (0);
	head = ft_lstnew((*f)(lst->content));
	if (!head)
		return (0);
	if (!(lst->next))
		return (head);
	else
		lst = lst->next;
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
