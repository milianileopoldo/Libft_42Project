/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:17:23 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/13 16:25:24 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%d\n", ft_isalpha('v'));
//     printf("%d\n", ft_isalpha('0'));
//     printf("%d\n", ft_isalpha(' '));
// }