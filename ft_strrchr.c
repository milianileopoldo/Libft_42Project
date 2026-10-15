/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:02:55 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/15 15:17:16 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *str, int ch)
{
	const char	*start;

	start = str;
	while (*str != '\0')
		str++;
	while (str >= start)
	{
		if (*str == (char)ch)
			return ((char *) str);
		str--;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char	*s;
// 	const char	*p;
// 	s = "hello world";
// 	p = ft_strrchr(s, 'l');
// 	if (p != NULL)
// 		printf("'l' found at index %ld, rest: \"%s\"\n", p - s, p);
// 	else
// 		printf("'l' not found\n");
// }