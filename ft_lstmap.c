/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:22:46 by mleopold            #+#    #+#           */
/*   Updated: 2026/11/05 16:22:46 by mleopold           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*current;
	t_list	*new_list;
	t_list	*new_content;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	current = lst;
	while (current != NULL)
	{
		new_content = f(current->content); 
		new_node = ft_lstnew(new_content); 
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
		}
		ft_lstadd_back(&new_list, new_node);
		current = current->next;
	}
	return (new_list);
}
