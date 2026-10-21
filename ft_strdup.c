/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:11:20 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/21 16:38:41 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *src){
    char *str;
    unsigned int i;
    unsigned int len;

    len = 0; 
    i = 0;
    while(src[len])
        len++;
    str = malloc((len + 1) * sizeof(char)); 
    if (str == NULL)
        return(NULL);
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return(str);
}

// int main(void)
// {
//     printf("%s \n", ft_strdup("hello"));
//     return (0);
// }