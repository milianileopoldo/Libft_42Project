/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:47:31 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/28 13:02:52 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (const char)s1[i] != '\0' && (const char)s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((const char)s1[i] - (const char)s2[i]);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d \n", ft_strncmp("abcde","abcd",5));
// 	printf("%d \n", ft_strncmp("abc","abc",3));
// 	printf("%d \n", ft_strncmp("abc","abcd",4));
// }
