/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 13:07:41 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/23 14:36:53 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strcat(char *dest, const char *src)
{
	char	*og_dest;

	og_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (og_dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	unsigned int    s1_len;
	unsigned int    s2_len;
	unsigned int	total_len;
	unsigned int 	i;
	char   			*space;
	char   			*joint;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	
	s1_len = ft_strlen(s1); 
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len + 1;

	space = malloc(total_len);
	if (space == NULL)
		return (NULL);

	i = 0;
	while (i < s1_len)
	{
		space[i] = s1[i];
		i++;
	}
	joint = ft_strcat(space, s2);
	return (joint);
}

// int main(void)
// {
// 	char *result;
// 	char *s1 = "Hello";
// 	char *s2 = "World";
// add test cases
// 	result  = ft_strjoin(s1, s2);
// 	printf("%s\n", result);
// 	free(result);
// }