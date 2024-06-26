/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:55:01 by mmarinov          #+#    #+#             */
/*   Updated: 2024/05/03 14:00:36 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	r;

	d = *a;
	r = *b;
	*a = d / r;
	*b = d % r;
}
/*
int	main()
{
	int	a;
	int	b;

	a = 8;
	b = 3;

	ft_ultimate_div_mod(&a, &b);

	printf("divider is %d\n", a);
	printf("reminder is %d\n", b);
	return (0);
}
*/
