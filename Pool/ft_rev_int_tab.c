/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:35:29 by mmarinov          #+#    #+#             */
/*   Updated: 2024/05/06 15:39:50 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size -1 - i] = swap;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[6] = {1, 2, 3, 4, 5, 6};
	int	size = 6 ;
	ft_rev_int_tab(tab, size);
	printf(" %d%d%d%d%d%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
*/
