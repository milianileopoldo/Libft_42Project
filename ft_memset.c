/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:02:55 by mleopold          #+#    #+#             */
/*   Updated: 2026/11/06 16:16:07 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	char	str[] = "HelloWorld";
//
// 	printf("Before: %s\n", str);
// 	ft_memset(str, 'X', 5);
// 	printf("After:  %s\n", str);
