/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:51:38 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/09 19:52:34 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	substring = (char *)ft_calloc((len + 1), sizeof(char));
	if (substring == NULL)
		return (NULL);
	while (len--)
		substring[len] = s[((size_t)start) + len];
	return (substring);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*origin = "";
	unsigned int	indice = 29;
	size_t	longitud = 4;
	char	*result = ft_substr(origin, indice, longitud);

	if (result == NULL)
	{
		printf("La funcion ft_substr devuelve NULL.\n");
	}
	else if (result[0] == '\0')
	{
		printf("El indice de inicio es mayor a la longitud de la cadena.\n");
		free(result);
	}
	else
	{
		printf("El resultado de la copia de ft_substr es: %s.\n", result);
		free(result);
	}
	return (0);
}*/
