/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:03:48 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/09 00:57:59 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	ft_malloc_words(const char *s, char c, char **result)
{
	size_t	substr;
	size_t	i;
	size_t	start;

	substr = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			result[substr] = (char *)malloc((i - start + 1) * sizeof(char));
			if (result[substr] == NULL)
				return ;
			ft_strlcpy(result[substr], (s + start), (i - start + 1));
			substr++;
		}
		else
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		word;
	char	**result;

	if (s == NULL)
		return (NULL);
	word = ft_count_word(s, c);
	result = (char **)malloc((word + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	ft_malloc_words(s, c, result);
	result[word] = NULL;
	return (result);
}
