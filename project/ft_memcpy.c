/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:04:34 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/11 17:39:48 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					count;
	unsigned char			*dest_ptr;
	const unsigned char		*src_ptr;

	count = 0;
	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	if (!src && !dest)
		return (NULL);
	while (count < n)
	{
		dest_ptr[count] = src_ptr[count];
		count++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
char src[] = "";
char dest[sizeof(src)];
ft_memcpy(dest, src, sizeof(src));
printf("Destino: %s\n", dest);

return (0);
}*/
