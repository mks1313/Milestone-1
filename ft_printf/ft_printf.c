/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:13:11 by mmarinov          #+#    #+#             */
/*   Updated: 2024/08/03 17:43:40 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(char const *s, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%' && *(s + 1))
			s++;
		if (*s == 'c')
		{
			ft_print_char(va_arg(args, int));
			count++;
		}
		else if (*s == 's')
			count += ft_print_str(va_arg(args, char *));
		else if (*s == 'p')
			count += ft_print_ptr(va_arg(args, void *));
		else
		{
			ft_print_char(*s);
			count++;
		}
		s++;
	}
	va_end(args);
	return (count);
}
/*
int	main(void)
{
	char	c;

	c = 'f';
	printf("original: %c\n", c);
	ft_printf("%c", c);
	return (0);
}*/
