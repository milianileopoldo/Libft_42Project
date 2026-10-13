/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:27:50 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/13 15:44:51 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	else
		return (c);
	return (c);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%c\n", ft_toupper('a'));
//     printf("%c\n", ft_toupper('1'));
//     printf("%c\n", ft_toupper('A'));
//     printf("%c\n", ft_toupper('c'));
// 	printf("%c\n", ft_toupper(' '));
// 	printf("%c\n", ft_toupper('0x00'));
// }