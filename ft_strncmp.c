/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:47:31 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/13 16:13:16 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	if (n == 0)
// 		return (0);
// 	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
// 	{
// 		i++;
// 	}
// 	if (i == n)
// 		return (0);
// 	return ((size_t)s1[i] - (size_t)s2[i]);
// }

#include <stdio.h>
#include <string.h>
int main()
{
    printf("%d \n", strncmp("abcde","anokaya",5));
	printf("%d \n", strncmp("abc","abc",3));
	printf("%d \n", strncmp("abc","abcd",4));
}
