/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:51:38 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/02 15:54:24 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
//TODO hay fallos en la formula, funcion, encotrar y corregir
	if (s == NULL)
	{
		return (NULL);
	}
	if (ft_strlen(s) < start)
	{
		return (ft_strdup(""));
	}
	substring = malloc((len + 1) * sizeof(char));
	if (substring == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
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
