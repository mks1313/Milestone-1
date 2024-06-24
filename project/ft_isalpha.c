/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:53:28 by mmarinov          #+#    #+#             */
/*   Updated: 2024/06/20 12:41:12 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	main()
{
	char	c;
	char	b;

	c = 65;
	b = 92;
	printf("My function, with letter %d \n", ft_isalpha(c));
	printf("Oficcial, with letter %d \n", isalpha(c));
	printf("My funct, with no letter %d \n", ft_isalpha(b));
	printf("Official funct, with no letter %d \n", isalpha(b));
	return (0);
}
*/
