/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:40:21 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/23 11:32:53 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*arr;
	size_t			total_size;

	if (size != 0 && n > SIZE_MAX / size)
		return (NULL);
	total_size = n * size;
	arr = malloc(total_size);
	if (arr == NULL && total_size != 0)
		return (NULL);
	ft_bzero(arr, total_size);
	return (arr);
}

// #include <stdio.h>
// int main(void)
// {
//     int *arr;
//     size_t i;
//     arr = ft_calloc(3, sizeof(int));
//     if (arr == NULL)
//     {
//         printf("Allocation failed!\n");
//         return (1);
//     }
//     i = 0;
//     while (i < 3)
//     {
//         printf("arr[%zu] = %d\n", i, arr[i]);
//         i++;
//     }
//     free(arr);
//     return (0);
// }