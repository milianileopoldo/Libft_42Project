/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:40:21 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/21 17:18:08 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char *arr;
    void *start;
    size_t i;

    if (size != 0 && nmemb > SIZE_MAX / size)
        return (NULL);
    arr = malloc(nmemb * size);
    start = arr;
    if (nmemb == 0 || size == 0)
        return (malloc(1));
    i = 0;
    while (i < nmemb * size)
    {
        arr[i] = 0;
        arr++;
    }
    if (arr == NULL)
        return (NULL);  
    return(start);
}

int main(void)
{
    int *arr;
    size_t i;

    arr = ft_calloc(5, sizeof(int));
    if (arr == NULL)
    {
        printf("Allocation failed\n");
        return (1);
    }

    i = 0;
    while (i < 5)
    {
        printf("%d\n", arr[i]);
        i++;
    }

    free(arr);
    return (0);
}


