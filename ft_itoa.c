/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 08:24:14 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/28 09:18:59 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	itoa_len(long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	char	*str;
	size_t	i;

	nb = n;
	len = itoa_len(nb);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	i = len;
	while (nb >= 10)
	{
		str[--i] = (nb % 10) + '0';
		nb = nb / 10;
	}
	str[--i] = nb + '0';
	return (str);
}

// #include "libft.h"
// #include <stdio.h>
// #include <limits.h>
// int main(void)
// {
//     int     nums[] = {42, 0, -123, INT_MAX, INT_MIN};
//     char    *str;
//     int     i;
//     i = 0;
//     while (i < 5)
//     {
//         str = ft_itoa(nums[i]);
//         if (!str)
//             return (1);
//         printf("%d -> %s\n", nums[i], str);
//         free(str);
//         i++;
//     }
//     return (0);
// }