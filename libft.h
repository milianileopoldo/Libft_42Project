/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:16:26 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/15 16:13:03 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_toupper(int c);
int	ft_islower(int c);
int	ft_isprint(int c);
int	ft_isascii(int c);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *str, int ch);
char	*ft_strchr(const char *str, int ch);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
