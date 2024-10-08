/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:06:03 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/11 18:58:41 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_free_array(char **arr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && arr[i] != NULL)
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
	arr = NULL;
	return (NULL);
}

size_t	ft_susbtr_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s == c)
		s++;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

size_t	ft_count_substr(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	sub_count;
	size_t	i;

	sub_count = ft_count_substr(s, c);
	array = ft_calloc(sub_count + 1, sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (*s && i < sub_count)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			array[i] = ft_substr(s, 0, ft_susbtr_len(s, c));
			if (array[i++] == NULL)
				return (ft_free_array(array, i));
		}
		while (*s && *s != c)
			s++;
	}
	array[sub_count] = NULL;
	return (array);
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
