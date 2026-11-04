/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 11:50:05 by mleopold          #+#    #+#             */
/*   Updated: 2026/11/04 15:21:57 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;	
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node2;
// 	t_list	*node3;
// 	head = ft_lstnew("Hello");
// 	node2 = ft_lstnew("World");
// 	node3 = ft_lstnew("Last");
// 	if (!head || !node2 || !node3)
// 	{
// 		free(head);
// 		free(node2);
// 		free(node3);
// 		return (1);
// 	}
// 	head->next = node2;
// 	node2->next = node3;
// 	printf("Last Node: %s\n", (char *)ft_lstlast(head)->content);
// 	free(head);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }