/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:49:00 by mmarinov          #+#    #+#             */
/*   Updated: 2024/06/24 16:32:55 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*source;
	unsigned char	*destiny;

	destiny = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!dest || !src)
		return (NULL);
	if (source < destiny && source + n > destiny)
	{
		count = n;
		while (count > 0)
		{
			count--;
			destiny[count] = source[count];
		}
	}
	else
	{
		count = 0;
		while (count < n)
			destiny[count] = source[count];
		count++;
	}
	return (dest);
}

int	main(void)
{
// Caso 1: Copia simple sin solapamiento
	char	src1[] = "Hello, World!";
	char	dest1[20];
	char	dest1_std[20];

	ft_memmove(dest1, src1, ft_strlen(src1) + 1);
	memmove(dest1_std, src1, ft_strlen(src1) + 1);
	printf("Caso 1 - Sin solapamiento:\n");
	printf("ft_memmove: %s\n", dest1);
	printf("memmove: %s\n", dest1_std);
	// Caso 2: Copia con solapamiento, src antes de dest
	char	src2[] = "Overlap Example";
	char	*dest2 = src2 + 8;
	ft_memmove(dest2, src2, 8);
	memmove(dest2, src2, 8);

	printf("Caso 2 - Con solapamiento (src antes de dest):\n");
	printf("ft_memmove: %s\n", dest2);
	printf("memmove: %s\n", dest2);

	// Caso 3: Copia con solapamiento, dest antes de src
	char	src3[] = "Another Example";
	char	*dest3 = src3;
	char	*src3_part = src3 + 8;

	ft_memmove(dest3, src3_part, 8);
	memmove(dest3, src3_part, 8);
	printf("Caso 3 - Con solapamiento (dest antes de src):\n");
	printf("ft_memmove: %s\n", dest3);
	printf("memmove: %s\n", dest3);
	// Comprobación visual de igualdad
	if (strcmp(dest1, dest1_std) == 0)
		printf("Caso 1 - Las cadenas son iguales.\n");
	else
		printf("Caso 1 - Las cadenas NO son iguales.\n");
	if (strcmp(src2 + 8, dest2) == 0)
		printf("Caso 2 - Las cadenas son iguales.\n");
	else
		printf("Caso 2 - Las cadenas NO son iguales.\n");
	if (strcmp(dest3, src3) == 0)
		printf("Caso 3 - Las cadenas son iguales.\n");
	else
		printf("Caso 3 - Las cadenas NO son iguales.\n");
	return 0;
}
