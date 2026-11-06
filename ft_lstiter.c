/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstiter.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/05 15:57:02 by username         #+#    #+#              */
/*   Updated: 2026/11/06 17:34:48 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// static void	print_content(void *s)
// {
// 	char	*str;
// 	str = (char *)s;
// 	while (*str)
// 	{
// 		write(1, str, 1);
// 		str++;
// 	}
// }
//
// int main(void)
// {
// 	t_list	*head;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list 	*current;
// 	head = ft_lstnew(ft_strdup("Hello "));
// 	node2 = ft_lstnew(ft_strdup("World "));
// 	node3 = ft_lstnew(ft_strdup("!!!"));
// 	head->next = node2;
// 	node2->next = node3;
//
// 	ft_lstiter(node2, print_content);
// }
