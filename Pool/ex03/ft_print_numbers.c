/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:05:54 by mmarinov          #+#    #+#             */
/*   Updated: 2024/04/30 13:19:21 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
