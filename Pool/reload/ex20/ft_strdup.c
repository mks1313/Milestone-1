/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:18:54 by mmarinov          #+#    #+#             */
/*   Updated: 2024/06/14 18:57:40 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	char	*helper;

	if (src == NULL)
	{
		return (0);
	}
	helper = malloc((ft_strlen(src) + 1) * sizeof(char));
	copy = helper;
	while (*src != '\0')
	{
		*helper = *src;
		src++;
		helper++;
	}
	*helper = '\0';
	return (copy);
}
/*
int	main(void)
{
	char	*temp;
	char	*dup;

	temp = "kdsvbflkjsabr97q34ytouabsgvv24-9i9tiglnkz257";
	dup = ft_strdup(temp);
	printf("%s", dup);
	return (0);
}*/
