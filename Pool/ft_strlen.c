/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:31:18 by mmarinov          #+#    #+#             */
/*   Updated: 2024/05/06 11:29:05 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
/*
int	main(void)
{
	int	l;
	char	*str;

	str = "Hola, que tal?";
	l = ft_strlen(str);
	printf("Longitud es %d\n", l);
	return (0);
}
*/
