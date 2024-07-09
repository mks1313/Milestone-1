/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:06:03 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/09 18:58:30 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	count_word(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static char *ft_strndup(const chgar *s, size_t n)
{
	char	*copy;
	size_t	i;

	copy = (char *)malloc((n + 1) * sizeof(char));
	if(!copy)
		return (NULL);

	i = 0;
	while (i < n)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static void	free_array(char const **array, size_t count)
{
	size_t	i;

	while (i < count)
	{
		free(array[i]);
		i++;
	}
	return (array);
}

static void	ft_length()
{

}

char	**ft_split(char const *s, char c)
{
	char	**new_array;
	size_t count;

	new_array = (char **)ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (!new_array)
		return (NULL);
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 
			new_array[count] = ft_substr(s, 0, len);
			if (!new_array[count])
			{
				
				return (NULL);
			}
			count++;
			s = s + len;
		}
		while (*s == c)
			s++;

	}
}

