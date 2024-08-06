/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:20:50 by mmarinov          #+#    #+#             */
/*   Updated: 2024/08/06 18:26:22 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_check_char(va_list *args, char c);
int		ft_printf(char const *s, ...);
int		ft_print_char(char c);
int		ft_print_str(char *s);
void	ft_putnum_hex(unsigned long num, int uppercase);
int		ft_print_ptr(void *p);
int		ft_ptrlen(unsigned long long num);
int		ft_print_int(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_lower_hex(unsigned int n);
int		ft_print_upper_hex(unsigned int n);

#endif
