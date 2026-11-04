/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:11:31 by mleopold          #+#    #+#             */
/*   Updated: 2026/11/04 12:36:43 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;
	
	if (!lst || !new)
		return;
	if (*lst == NULL)
	{
		*lst = new;
		return;
	}
	current = *lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*empty;
// 	head = ft_lstnew("Hello");
// 	node2 = ft_lstnew("World");
// 	node3 = ft_lstnew("42");
// 	empty = NULL;
// 	if (!head || !node2 || !node3)
// 		return (1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	printf("First: %s\n", (char *)head->content);
// 	printf("Second: %s\n", (char *)head->next->content);
// 	printf("Third: %s\n", (char *)head->next->next->content);
// 	ft_lstadd_back(&empty, ft_lstnew("Empty test"));
// 	printf("NEW: %s\n", (char *)empty->content);
// 	free(node3);
// 	free(node2);
// 	free(head);
// 	free(empty);
// 	return (0);
// }