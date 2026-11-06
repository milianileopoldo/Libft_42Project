/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:47:31 by mleopold          #+#    #+#             */
/*   Updated: 2026/11/06 16:23:40 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && str1[i] != '\0' && str1[i] == str2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d \n", ft_strncmp("abcde","abcd",5));
// 	printf("%d \n", ft_strncmp("abc","abc",3));
// 	printf("%d \n", ft_strncmp("abc","abcd",4));
// }
