/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_diuxx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:14:57 by mmarinov          #+#    #+#             */
/*   Updated: 2024/09/13 13:02:56 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_int(int n)
{
	char	*num_str;
	int		len;

	num_str = ft_itoa(n);
	if (!num_str)
		return (0);
	len = ft_strlen(num_str);
	ft_print_str(num_str);
	free(num_str);
	return (len);
}

int	ft_print_unsigned(unsigned int n)
{
	char	*num_str;
	int		len;

	num_str = ft_utoa(n);
	if (!num_str)
		return (0);
	len = ft_strlen(num_str);
	ft_print_str(num_str);
	free(num_str);
	return (len);
}

int	ft_print_lower_hex(unsigned int n)
{
	if (n == 0)
		return (ft_print_char('0'));
	ft_putnum_hex(n, 0);
	return (ft_ptrlen(n));
}

int	ft_print_upper_hex(unsigned int n)
{
	if (n == 0)
		return (ft_print_char('0'));
	ft_putnum_hex(n, 1);
	return (ft_ptrlen(n));
}
