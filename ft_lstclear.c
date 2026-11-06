/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 15:38:07 by username         #+#    #+#              */
/*   Updated: 2026/11/06 17:31:27 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
	{
		return ;
	}
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}

// int main()
// {
// 	t_list	*head;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*current;
// 	head = ft_lstnew(ft_strdup("Hello"));
// 	node2 = ft_lstnew(ft_strdup("World"));
// 	node3 = ft_lstnew(ft_strdup("!!!"));
// 	head->next = node2;
// 	node2->next = node3;
// 	current = head;
// 	while (current != NULL)
// 	{
// 		printf("%s\n", (char *)(current)->content);
// 		current = (current)->next;
// 	}
// }
// lst - address of the HEAD pointer
// *lst - pointer to the current node
// (*lst)->content - content of the current node
// (*lst)->next - pointer to the next WHOLE node
