/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:39:17 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/23 15:06:09 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
	size_t	*start;
	size_t	*end;
	size_t	*len;
	int		i;
	char	*trimmed;
	
	if (s1 == NULL || set == NULL)
		return (NULL);
	
	while (*s1 != '\0')
	{
		i = 0;
		while (set[i] != '\0')
		{
			if (*s1 == set[i])
			{
				
			}
		}
		i++;
	}
	s1++;
		
}

void	*ft_memchr(const void *str, int c, size_t n);

int main(void)
{
	char *result;
	char s1 = "xXxxHello Worldxxx";
	char set = "xX";

	result = ft_strtrim(s1, set);
	printf("%s\n", result);
}