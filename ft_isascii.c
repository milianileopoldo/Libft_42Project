/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:53:15 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/13 13:03:41 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%d\n", ft_isascii('v'));
//     printf("%d\n", ft_isascii('0'));
// 	printf("%d\n", ft_isascii('0x00'));
//     printf("%d\n", ft_isascii(' '));
// }