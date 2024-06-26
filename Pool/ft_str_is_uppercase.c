/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:45:27 by mmarinov          #+#    #+#             */
/*   Updated: 2024/05/07 15:20:34 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if (!(str[c] >= 'A' && str[c] <= 'Z'))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/*
int main(void)
{
char	str[] = "HGDFJGHSJKJDF";
printf("%d\n",(ft_str_is_uppercase(str)));
return (0);
}
*/
