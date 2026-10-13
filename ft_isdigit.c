/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:33:55 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/13 13:00:37 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%d\n", ft_isdigit('v'));
//     printf("%d\n", ft_isdigit('0'));
//     printf("%d\n", ft_isdigit(' '));
// }