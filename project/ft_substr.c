/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:51:38 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/01 17:38:19 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
//TODO hay fallos en la formula, funcion, encotrar y corregir
	i = 0;
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
	char	*origin = "Hola";
	unsigned int	indice = 10;
	size_t	longitud = 5;
	char	*result = ft_substr(origin, indice, longitud);

	if (result != NULL)
	{
	printf("EL resultado de copia con funcion de ft_substr es: %s.\n", result);
	free(result);
	}
	else
	{
	printf("La funcion ft_substr devolvio NULL.\n");
	}
	return (0);
}*/
