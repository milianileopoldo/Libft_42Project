/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:39:17 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/28 13:02:38 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return(1);
		i++;
	}
	return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trimmed;
	
	if (s1 == NULL || set == NULL)
		return (NULL);
	
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	trimmed = malloc((end - start) + 1);
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

// int main(void)
// {
// 	char *result;
// 	char s1 = "xXxxHello Worldxxx";
// 	char set = "xX";

// 	result = ft_strtrim(s1, set);
// 	printf("%s\n", result);
// }
