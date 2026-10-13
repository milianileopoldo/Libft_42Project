/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:04:47 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/13 13:12:47 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
	{
		return (0);
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%d\n", ft_isprint('v'));
//     printf("%d\n", ft_isprint('0'));
// 	printf("%d\n", ft_isprint('0x00'));
//     printf("%d\n", ft_isprint('0x7F'));
// }   