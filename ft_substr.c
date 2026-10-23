/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:50:10 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/23 12:13:23 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int i;
	char 	*substr;

	if (s == NULL)
        return(NULL);
	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main(void)
// {
// 	char *substr;
// 	int len;
// 	int  i;
// 	substr = ft_substr("Hello World", 6, 4);
// 	len = strlen(substr);
// 	i = 0;
// 	while (i < len)
// 	{
// 		printf("substr[%d] = %c\n", i, substr[i]);
// 	    i++;
// 	}
// 	return(0);
// 	free(substr);
// }
