/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:43:20 by mmarinov          #+#    #+#             */
/*   Updated: 2024/08/06 15:31:53 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa(unsigned int n)
{
	char			*str;
	unsigned int	tmp;
	int				len;

	tmp = n;
	len = 1;
	while (tmp >= 10)
	{
		tmp /= 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned int	num = 359283649;
	char	*result = ft_utoa(num);

	if(result)
	{
		printf("resultado de conversion es: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error: Memoria insufuciente para convertit el numero.\n");
	}
	printf("El tamaño de unsignd int es: %zu bytes\n", sizeof(unsigned int));
	printf("El tamaño de unsigned long es: %zu bytes\n", sizeof(unsigned long));
	return (0);
}*/
