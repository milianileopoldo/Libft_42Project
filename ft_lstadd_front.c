/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_front.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 10:57:29 by username         #+#    #+#              */
/*   Updated: 2026/11/06 17:32:02 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst | !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new;

// 	head = ft_lstnew("World");
// 	new = ft_lstnew("Hello");

// 	if (!head || !new)
// 	{
// 		free(head);
// 		free(new);
// 		return (1);
// 	}
// 	ft_lstadd_front(&head, new);
// 	printf("First node: %s\n", (char *)head->content);
// 	printf("Second node: %s\n", (char *)head->next->content);
// 	free(head->next);
// 	free(head);
// 	return (0);
// }
