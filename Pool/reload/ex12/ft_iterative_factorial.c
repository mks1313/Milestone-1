/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:07:17 by mmarinov          #+#    #+#             */
/*   Updated: 2024/06/17 15:03:14 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	factorial = 1;
	i = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}
/*
#include <stdio.h>

int	main()
{
int	number;
printf("Ingresa numero: ");
scanf("%d", &number);

int	result = ft_iterative_factorial(number);
printf("el factorial de %d es: %d\n", number, result);

return (0);
	}
*/	
