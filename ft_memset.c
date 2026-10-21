/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:02:55 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/21 10:31:17 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    unsigned char *ptr;
    size_t i;
    
    ptr = (unsigned char *)str;
    i = 0;
    while (i <= n)
    {
        ptr[i] = c;
        i++;
    }
    return(ptr);
}

#include <stdio.h>

int	main(void)
{
	char	buf[10];

	ft_memset(buf, 'A', 6);
	buf[6] = '\0';
	printf("%s\n", buf);
	return (0);
}
