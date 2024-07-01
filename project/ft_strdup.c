/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:27:05 by mmarinov          #+#    #+#             */
/*   Updated: 2024/06/28 18:00:28 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*copy;
	char	*helper;

	if (s == NULL)
	{
		return (NULL);
	}
	helper = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (helper == NULL)
	{
		return (NULL);
	}
	copy = helper;
	while (*s != '\0')
	{
		*helper = *s;
		helper++;
		s++;
	}
	*helper = '\0';
	return (copy);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*origin = "Hola, como estas";
	char	*result = ft_strdup(origin);
	printf("cadena copiada %s\n", result);
	printf("direccion de memoria es: %p", result);
	printf("direccion de memoria es: %p", origin); 
	return (0);
}*/
