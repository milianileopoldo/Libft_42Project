/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:16:47 by mleopold          #+#    #+#             */
/*   Updated: 2026/11/04 12:16:38 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new)
	{
		new->content = content;
		new->next = NULL;
	}
	return(new);
}

// int main()
// {
// 	t_list *node;
// 	node = ft_lstnew("Hello 42!");
// 	if (node == NULL)
// 	{
// 		printf("memory allocation failed!");
// 		return (1);
// 	}
// 	printf("Content: %s\n", (char *) node->content);
// 	printf("Next pointer: %p\n", node->next);
// }