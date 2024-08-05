/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:28:35 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/02 15:18:38 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new_str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*string1 = "Hola, mundo!";
	char	*string2 = "";
	char	*result = ft_strjoin(string1, string2);

	if (result == NULL)
	{
		printf("No se ha podido concatenar el resultado es NULL.\n");
	}
	else
	{
		printf("el resultado de la funcion ft_strjoin es: %s\n", result);
	}
	return (0);
}*/
