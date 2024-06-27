/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:18:54 by mmarinov          #+#    #+#             */
/*   Updated: 2024/06/24 18:35:36 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (!dst || !src)
		return (0);
	while (count < size -1 && src[count] != '\0')
	{
		dst[count] = src[count];
		count++;
	}
	if (size > 0)
	{
		dst[count] = '\0';
	}
	while (src[count] != '\0')
	{
		count++;
	}
	return (count);
}
