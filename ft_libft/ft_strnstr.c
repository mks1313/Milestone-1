/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:23:22 by mmarinov          #+#    #+#             */
/*   Updated: 2024/06/28 15:37:05 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	bg;
	size_t	lit;

	bg = 0;
	if (*little == '\0')
	{
		return ((char *)big);
	}
	while (bg < len && big[bg] != '\0')
	{
		lit = 0;
		while (bg + lit < len && big[bg + lit] == little[lit])
		{
			if (little[lit + 1] == '\0')
			{
				return ((char *)&big[bg]);
			}
			lit++;
		}
		bg++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*large = "helloHolahola";
	const char	*small = "Hola";
	size_t		ptr = 12;
	char	*result = ft_strnstr(large, small, ptr);

	if (result != NULL)
	{
	printf("La subcadea %s se encontro en: %s\n",small, result);
	}
	else
	{
	printf("La subcadena %s no se encontro.\n", small);
	}
}*/
