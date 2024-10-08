/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:01:46 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/01 12:48:53 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	mem = 10;
	int	s = 6;
	void *result = ft_calloc(mem, s);
	if (result != NULL)
	{
		printf("resultado es: %p\n", result);
		unsigned char	*ptr = (unsigned char *)result;
		int	zero = 1;
		size_t	i = 0;

	printf("valores de la memoria reservada:\n");
		while (i < (size_t)(mem * s))
		{
			if (ptr[i] != 0)
			{
				zero = 0;
			}
		
		printf("mem[%zu] = %d\n", i, ptr[i]);
		i++;
		}
	
	if (zero)
	{
		printf("la memoria esta correctamente inicializada a cero.\n");
	}
	else
	{
		printf("Error: la memoria no esta correctamente inicializada a cero.\n");
	}
	}
	free (result);
	return (0);
}*/
