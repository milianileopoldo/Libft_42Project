/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:15:00 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/16 15:22:17 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *s;

	s = (unsigned char *)str;
	
	
}


// char	*ft_strchr(const char *str, int ch)
// {
// 	while (*str != '\0')
// 	{
// 		if (*str == (char)ch)
// 			return ((char *) str);
// 		str++;
// 	}
// 	if ((char)ch == '\0')
// 		return ((char *) str);
// 	return (NULL);
// }
