/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:55:02 by mmarinov          #+#    #+#             */
/*   Updated: 2024/06/21 12:27:20 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*pointer;
	size_t			counter;

	counter = 0;
	pointer = (unsigned char *)s;
	while (counter < n)
	{
		pointer[counter] = 0;
		counter++;
	}
}
