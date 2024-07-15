/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:32:57 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/11 19:14:05 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		num;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	num = n;
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[--len] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
/*
int	main(void)
{
long	num = 359214783649;
char	*result = ft_itoa(num);

size_t	i;

i = 0;
while (result[i])
	printf("%c", result[i++]);
printf("\n");

if(result)
{
printf("resultado de conversion es: %s\n", result);
free(result);
}
else
{
printf("Error: Memoria insufuciente para convertit el numero.\n");
}
printf("El tamaño de long es: %zu bytes\n", sizeof(long));
printf("El tamaño de long es: %zu bytes\n", sizeof(long long));
return (0);
}*/
