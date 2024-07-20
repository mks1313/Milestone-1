/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:22:01 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/04 14:59:02 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (s1[start] == '\0')
		return (ft_substr(s1, 0, 0));
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
/*
#include <stdio.h>

int	main(void)
{
const char	*s1 = "sjdbljsjdbs";
const char	*set = NULL;
char	*result = ft_strtrim(s1, set);

if (result)
{
printf("Nueva cadena recortada es: %s.\n", result);
}
else
{
printf("No se pudo recortar la cadena.\n");
}
return (0);
}*/
