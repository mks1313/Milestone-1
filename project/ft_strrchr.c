/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:08:36 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/11 16:41:51 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			last = (char *)s;
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (last);
}
/*
#include <stdio.h>

int	main(void)
{
char	*ocur = "We are the champions";
int	d = '\0';
char	*result = ft_strrchr(ocur, d);
if (result != 0)
{
printf("Last ocurrence of character '%c' find: %s\n", d, result);
}
else
{
printf("Character '%c' not find\n", d);
}
return (0);
}*/
