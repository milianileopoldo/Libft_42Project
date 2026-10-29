/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleopold <mleopold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 12:31:27 by mleopold          #+#    #+#             */
/*   Updated: 2026/10/29 12:47:23 by mleopold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	split_count(char const *s, char c)
{
	size_t	word_count;
	size_t	i;

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

static	size_t	word_len(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0' && s[count] != c)
		count++;
	return (count);
}

static	void	free_pointer_array(char **words, size_t word_count)
{
	size_t	i;

	i = 0;
	if (words == NULL)
		return ;
	while (i < word_count)
	{
		free(words[i]);
		words[i] = NULL;
		i++;
	}
	free(words);
}

static int	fill_words(char **words, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			len = word_len(s + i, c);
			words[j] = ft_substr(s, i, len);
			if (words[j] == NULL)
			{
				free_pointer_array(words, j);
				return (0);
			}
			i += len;
			j++;
		}
	}
	words[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	word_count;

	if (s == NULL)
		return (NULL);
	word_count = split_count(s, c);
	words = ft_calloc((word_count + 1), sizeof(char *));
	if (words == NULL)
		return (NULL);
	if (!(fill_words(words, s, c)))
		return (NULL);
	return (words);
}

// int	main(void)
// {
// 	char	**words;
// 	int		i;
// 	words = ft_split("...Hello..42..", '.');
// 	if (words == NULL)
// 		return (1);
// 	i = 0;
// 	while (words[i] != NULL)
// 	{
// 		printf("words[%d] = %s\n", i, words[i]);
// 		free(words[i]);
// 		i++;
// 	}
// 	free(words);
// 	return (0);
// }
