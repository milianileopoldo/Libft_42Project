/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstsize.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 11:30:22 by username         #+#    #+#              */
/*   Updated: 2026/11/06 17:32:45 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node2;
// 	t_list	*node3;
// 	head = ft_lstnew("Hello");
// 	node2 = ft_lstnew("World");
// 	node3 = ft_lstnew("!");
// 	if (!head || !node2 || !node3)
// 	{
// 		free(head);
// 		free(node2);
// 		free(node3);
// 		return (1);
// 	}
// 	head->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	printf("Number of Nodes: %d\n", ft_lstsize(head));
// 	free(head);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }
