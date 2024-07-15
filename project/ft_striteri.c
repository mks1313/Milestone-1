/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:38:21 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/10 16:34:29 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

static void example_function(unsigned int i, char *c) {
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 'a' + 'A'; // Convertir a mayúsculas
}

int main() {
	char str[] = "hola mundo";
	ft_striteri(str, example_function);
	printf("%s\n", str); 
	return 0;
}*/
