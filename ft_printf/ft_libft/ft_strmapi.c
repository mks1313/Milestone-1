/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:23:37 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/10 17:07:36 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*result;
	size_t		i;
	size_t		str_len;

	if (!s || !f)
		return (NULL);
	str_len = ft_strlen(s);
	result = (char *)ft_calloc(str_len + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

char	example_funct(unsigned int i, char c)
{
	i += i;
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

int	main(void)
{
	char	str[] = "Hola, Que tal 42";
	char	*result;

	result = ft_strmapi(str, example_funct);
	if (result)
	{
		printf("Original: %s\n", str);
		printf("Modificadad por ft_str_mapi: %s\n", result);
		free(result);
	}
	return (0);
}*/
