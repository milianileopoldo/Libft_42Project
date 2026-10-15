/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:51:09 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/15 14:17:45 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i + 1 < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char			dest[20] = "Hello";
// 	char			src[] = "World";
// 	size_t			result;
// 	result = ft_strlcpy(dest, src, 3);
// 	printf("dest: %s\n", dest);
// 	printf("It tried to occupy: %zu\n", result);
// 	return (0);
// }