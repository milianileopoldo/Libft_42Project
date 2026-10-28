/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 12:31:27 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/28 14:29:23 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	split_count(char const *s, char c)
{
	size_t	word_count;
	size_t	i;
	char 	*start;
	char	*end;
	
	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			word_count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (word_count);
}

static 	extract

// static	char	**split_free(char **words, size_t k)
// {
// 	/* ▢ 2: undo on failure */
// }

// static	*fill_word(char *dest, const char **src)
// {
// 	int	i;
// 	int k;

// 	i = 0;
// 	k = 0;
// 	while (src[i][k] != '\0')
// 	{
// 		dest[i][k] = src[i][k];
// 		i++;
// 		k++;
// 	}
// }

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	all_words;
	size_t	i;
	size_t	word_count;

	if (s == NULL || c == NULL)
		return (NULL);
		
	word_count = split_count(s, c);
	words = malloc(sizeof(char *) * word_count + 1);
	if (words == NULL)
		return (NULL);

	i = 0;
	while (i < word_count + 1)
	{
		words[i] = malloc(ft_strlen(words[i]) + 1);
		i++;
	}
	all_words = malloc(sizeof(char *) * i);
	if (all_words == NULL)
		return (NULL);
	fill_word(words[i], all_words);
	
	return (words);
}

// s - string to be split
// c - delimeter