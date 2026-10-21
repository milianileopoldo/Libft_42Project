/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:04:57 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/21 14:08:47 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char *dst;
    const unsigned char *srce;
    size_t i;

    dst = (unsigned char *)dest;
    srce = (unsigned char *)src;
	i = 0;
	if (dst < srce)
	{
		while (i < count)
		{
			dst[i] = srce[i];
			i++;
		}
	}
	else
	{
		i = count;
		while (i > 0)
		{
			i--;
			dst[i] = srce[i];
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char src[12] = "Helio";
// 	char dest[12] = "HelloWorld";

// 	ft_memmove(dest + 2, src, 5); 
// 	printf("%s\n", dest);
// }