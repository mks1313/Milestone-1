/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:06:03 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/10 15:27:37 by mmarinov         ###   ########.fr       */
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
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*copy;
	size_t	i;

	copy = (char *)malloc((n + 1) * sizeof(char));
	if (!copy)
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

static void	free_array(char **array, size_t count)
{
	size_t	i;

	while (i < count)
	{
		free(array[i]);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**new_array;
	size_t	count;
	size_t	len;

	if (!s)
		return (NULL);
	count = 0;
	new_array = (char **)ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (!new_array)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			new_array[count] = ft_strdup(s);
			if (!new_array[count])
			{
				free_array(new_array, count);
				return (NULL);
			}
			count++;
			s += len;
		}
		while (*s == c)
			s++;
		new_array[count] = NULL;
	}
	return (new_array);
}
/*
#include <stdio.h>

	int main(void)
	{
		char **result;
		size_t i;

		result = ft_split("Hola mundo, bienvenidos al 42!", ' ');
		if (result) {
			for (i = 0; result[i] != NULL; i++) {
				printf("%s\n", result[i]);
				free(result[i]); // Liberar cada subcadena individualmente
			}
			free(result); // Liberar el arreglo de punteros
		}
		return 0;
	}*/
