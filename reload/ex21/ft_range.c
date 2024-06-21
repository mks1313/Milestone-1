/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:01:53 by mmarinov          #+#    #+#             */
/*   Updated: 2024/06/16 11:38:12 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*helper;
	int	array;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	array = max - min;
	helper = malloc((array) * sizeof(int));
	while (i < array)
	{
		helper[i] = min + i;
		i++;
	}
	return (helper);
}
/*
int	main(void)
{
	int		min;
	int		max;
	int		*range;
	int		i;

	i = 0;
	min = 20;
	max = 27;
	range = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d", range[i]);
		i++;
		printf("\n");
	}
	return (0);
}*/
