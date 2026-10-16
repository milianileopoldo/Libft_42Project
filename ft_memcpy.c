/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:32:57 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/16 14:38:04 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dst;
    unsigned char *srce;
    size_t i;
    
    dst = (unsigned char *)dest;
    srce = (unsigned char *)src;
    i = 0;
    while (i <= n)
    {
        dst[i] = srce[i];
        i++;
    }
    return(dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char			dest[20] = "Hello";
// 	char			src[] = "World";
// 	char	*result;

//     result = ft_memcpy(dest, src, 3);
//     printf("dest: %s\n", result);
// }