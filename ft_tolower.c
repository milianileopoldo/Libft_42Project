/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:45:34 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/13 15:46:40 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	else
		return (c);
	return (c);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%c\n", ft_tolower('A'));
//     printf("%c\n", ft_tolower('1'));
//     printf("%c\n", ft_tolower('a'));
//     printf("%c\n", ft_tolower('C'));
// 	printf("%c\n", ft_tolower(' '));
// 	printf("%c\n", ft_tolower('0x00'));
// }