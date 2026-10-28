/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 09:36:53 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/28 09:58:14 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s++, 1);
	}
}

// int main(void)
// {
//     ft_putstr_fd("Hi",0);
//     ft_putstr_fd("i",1);
//     ft_putstr_fd("!",2);
//     return(0);
// }