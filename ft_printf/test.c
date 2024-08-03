/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:06:55 by mmarinov          #+#    #+#             */
/*   Updated: 2024/08/02 11:53:11 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void	print_char(int caracter, int *counter)
{
	if (write(1, &caracter, 1) == 1)
		(*counter)++;
}

static int	char_check(va_list args, char type, int *counter)
{
	if (type == 'c')
		print_char(va_arg(args, int), counter);
	return (0);
}

int	ft_printf(char const *string, ...)
{
	va_list	args;
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] == '%' && string[i + 1])
		{
			i++;
			if (string[i])
				char_check(args, string[i], &counter);
		}
		else
		{
			print_char(string[i], &counter);
		}
		i++;
	}
	va_end(args);
	return (counter);
}

int	main(void)
{
	int	c;

	c = 'c';
	printf("Hola\n");
	ft_printf("Hola\n");
	ft_printf("%i\n", ft_printf("%c\n", c));
	printf("%i\n", printf("%c\n", c));
	return (0);
}
