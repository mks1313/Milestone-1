/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:20:33 by mmarinov          #+#    #+#             */
/*   Updated: 2024/08/06 17:07:48 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char			c;
	char			*s;
	int				d;
	int				i;
	int				uno;
	int				dos;
	unsigned int	n;

	n = 235315515;
	s = "Caramba, he hecho un prueba";
	c = 'z';
	d = -12384;
	i = 45;
	uno = printf("Character %c\n%s\n%p\n%%\n%i\n%d\n%u\n", c, s, s, i, d, n);
	printf("%d\n", uno);
	printf("Ahora mi funcion!\n");
	dos = ft_printf("Character %c\n%s\n%p\n%%\n%i\n%d\n%u\n", c, s, s, i, d, n);
	printf("%d\n", dos);
	return (0);
}
