/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:49:02 by mmarinov          #+#    #+#             */
/*   Updated: 2024/05/06 18:47:34 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	char	*init;

	init = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (init);
}
/*
int	main(void)
{
	char	src[20];
	char	dest[20];

	strcpy(src, "Hello, world!");
	ft_strcpy(dest, src);
	printf("Cadena copiada: %s\n", dest);
	return (0);
}
*/
