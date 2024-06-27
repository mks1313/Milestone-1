/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriera-c <nriera-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:31:25 by nriera-c          #+#    #+#             */
/*   Updated: 2024/04/27 18:48:00 by nriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

void	print_first_last(int x)
{
	int	i;

	i = 0;
	ft_putchar(111);
	while (i < x - 2)
	{
		ft_putchar(45);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(111);
	}
	write(1, "\n", 1);
}

void	print_vertical(int x, int y)
{
	int	j;
	int	k;

	j = 0;
	while (j < y - 2)
	{
		ft_putchar(124);
		k = 0;
		while (k < x - 2)
		{
			ft_putchar(32);
			k++;
		}
		if (x > 1)
		{
			ft_putchar(124);
		}
		write(1, "\n", 1);
		j++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(2, "Error: Value should be above 0.\n", 23);
		return ;
	}
	print_first_last(x);
	print_vertical(x, y);
	if (y > 1)
	{
		print_first_last(x);
	}
}
