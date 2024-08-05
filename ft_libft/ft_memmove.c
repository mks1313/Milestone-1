/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:49:00 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/11 17:42:23 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*source;
	unsigned char		*destiny;

	destiny = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (source < destiny)
	{
		count = n;
		while (count > 0)
		{
			count--;
			destiny[count] = source[count];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	unsigned char	source[] = "Hello, World!";
	unsigned char	destiny1[20] = {0};
	unsigned char	destiny2[20] = {0};

	ft_memmove(destiny1, source, strlen((char *)source) + 1);
	printf("esto es mi funcion: %s \n", destiny1);
	memmove(destiny2, source, strlen((char *)source) + 1);
	printf("esto es ofical memmove: %s \n", destiny2);
	return (0);
}*/
