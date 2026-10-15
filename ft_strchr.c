/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:33:00 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/15 15:01:50 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int ch)
{
	while (*str != '\0')
	{
		if (*str == (char)ch)
			return ((char *) str);
		str++;
	}
	if ((char)ch == '\0')
		return ((char *) str);
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char	*s;
// 	const char	*p;
// 	s = "hello world";
// 	p = ft_strchr(s, 'o');
// 	if (p != NULL)
// 		printf("'o' found at index %ld, rest: \"%s\"\n", p - s, p);
// 	else
// 		printf("'o' not found\n");
// }