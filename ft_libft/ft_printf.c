/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:13:11 by mmarinov          #+#    #+#             */
/*   Updated: 2024/09/13 13:01:15 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_char(va_list *args, char c)
{
	int	length;

	length = 0;
	if (c == 'c')
		length += ft_print_char(va_arg(*args, int));
	else if (c == 's')
		length += ft_print_str(va_arg(*args, char *));
	else if (c == 'p')
		length += ft_print_ptr(va_arg(*args, void *));
	else if (c == 'i' || c == 'd')
		length += ft_print_int(va_arg(*args, int));
	else if (c == 'u')
		length += ft_print_unsigned(va_arg(*args, unsigned int));
	else if (c == 'x')
		length += ft_print_lower_hex(va_arg(*args, unsigned int));
	else if (c == 'X')
		length += ft_print_upper_hex(va_arg(*args, unsigned int));
	else
		length += ft_print_char(c);
	return (length);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		tot_len;
	int		i;

	tot_len = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			i++;
			tot_len += ft_check_char(&args, s[i]);
		}
		else
			tot_len += ft_print_char(s[i]);
		i++;
	}
	va_end(args);
	return (tot_len);
}
