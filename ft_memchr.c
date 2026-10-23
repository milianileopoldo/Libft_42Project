/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:15:00 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/23 14:46:47 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *s;
	size_t i;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		if (*s == (unsigned char)c)
			return (s);
		else
			s++;
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str[] = "Hello World";
// 	char *result;

// 	result = ft_memchr(str, 'W', 11);
// 	if (result != NULL)
// 		printf("Found: %s\n", result);
// 	else
// 		printf("Character not found\n");

// 	return (0);
// }