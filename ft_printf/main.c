/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:20:33 by mmarinov          #+#    #+#             */
/*   Updated: 2024/08/05 18:08:38 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	ch;
	char	*s;
	int		uno;
	int		dos;

	s = "De hecho un prueba";
	ch = 'z';
	uno = printf("Character %c\n %s\n %p\n %%\n", ch, s, s);
	printf("%d\n", uno);
	printf("Ahora mi funcion!\n");
	dos = ft_printf("Character %c\n %s\n %p\n %%\n", ch, s, s);
	printf("%d\n", dos);
	return (0);
}
