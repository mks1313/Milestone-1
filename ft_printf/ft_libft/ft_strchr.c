/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:08:31 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/11 16:42:59 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if (*ptr == (char)c)
		{
			return (ptr);
		}
		ptr++;
	}
	if ((char)c == '\0')
	{
		return (ptr);
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
char	*str = "Hello, World";
int		f = 'e';
char	*result = ft_strchr(str, f);

if (result != NULL)
{
printf("Caracer encontrado %s\n", result);
}
else
{
printf("Caracter no encontrado\n");
}
return (0);
}*/
