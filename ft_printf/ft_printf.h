/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:20:50 by mmarinov          #+#    #+#             */
/*   Updated: 2024/08/05 18:57:36 by mmarinov         ###   ########.fr       */
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
void	ft_putnum_hex(unsigned long num);
int		ft_print_ptr(void *p);
int		ft_ptrlen(unsigned long long num);

#endif
