/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:18:15 by mmarinov          #+#    #+#             */
/*   Updated: 2024/06/11 11:57:42 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	if (nb <= 0)
		return (0);
	while (sqrt * sqrt < nb)
	{
		sqrt++;
		if (sqrt * sqrt == nb)
			return (sqrt);
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main (void)
	{
	int	num;
	int	result;
	char	input[256];

	printf("ingrese el numero: ");
	fgets(input, 256, stdin);
	num = atoi(input);
	result = ft_sqrt(num);
	if (result == 0 && num != 0)
	{
		printf("el numero es irracional o negativo %d ", num);
	}
	else
	{
		printf("la raiz cuadrada de %d es %d. \n", num, result);
	}
	return (0);
}*/
