/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:46:15 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/01 11:59:31 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	count;
	size_t	total_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	total_len = dest_len + src_len;
	if (dest_len >= size)
	{
		return (src_len + size);
	}
	count = dest_len;
	while (*src && count < size - 1)
	{
		dst[count++] = *src++;
	}
	dst[count] = '\0';
	return (total_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst_string[20] = "Hello ";
	const char	src_string[] = "world!";
	size_t	size = 20;
	size_t	result;

	result = ft_strlcat(dst_string, src_string, size);

	printf("Result of ft_strlcat is: %zu\n", result);
	printf("Resulting string '%s'\n", dst_string);
	if (result >= size)
	{
		printf("The concatenation was truncated. \n");
	}
	else
	{
		printf("The concatenation was successful. \n");
	}
	return (0);
}*/
