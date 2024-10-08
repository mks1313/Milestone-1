/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:18:24 by mmarinov          #+#    #+#             */
/*   Updated: 2024/06/27 13:14:09 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				iter;
	unsigned char		letter;

	ptr = (const unsigned char *)s;
	iter = 0;
	letter = (unsigned char )c;
	while (iter < n)
	{
		if (ptr[iter] == letter)
		{
			return ((void *)(ptr + iter));
		}
		iter++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*string = "Hola, hola como estais";
	unsigned char	let = 'z';
	size_t	z = 40;
	unsigned char	*result = ft_memchr(string, let, z);
	if (result != 0)
	{
		printf("Letra buscada %c se coincide en posicion  %s\n", let, result);
	}
	else 
	{
		printf("El caracter %c'no se encontro'\n", let);
	}
	return (0);
}*/
