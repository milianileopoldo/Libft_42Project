/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 14:46:10 by mleopold          #+#    #+#             */
/*   Updated: 2026/11/06 16:35:07 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static int	ft_issign(int c)
{
	if ((c == '+' || c == '-'))
		return (1);
	return (0);
}

static int	ft_num(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (ft_issign(str[i]))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_num(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// #include "libft.h"
// int main(void)
// {
//     printf("%d \n", ft_atoi(" ---+--+1234ab567"));
// 	printf("%d \n", ft_atoi(" ---+--+abc1234ab567"));
//     printf("%d \n", ft_atoi("   --42"));
//     printf("%d \n", ft_atoi("42"));
// 	printf("%d \n", ft_atoi("-17"));
//     return (0);
// }