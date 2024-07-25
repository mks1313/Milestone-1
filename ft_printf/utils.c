/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:15:22 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/25 15:49:38 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_putchar_ch(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_ch(char *s)
{
	int	len;

	len = 0;
	if(!s)
		return (write(1, "(null)", 6));
	while (*s)
		len += write(1, s++, 1);
	return (len);
}


