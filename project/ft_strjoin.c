/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:28:35 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/01 17:31:29 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;
//terminar de mejorar.
	i = 0;
	new_str = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		while (s1)
		{
			new_str[i] = s1[i];
			i++;
		}
		j = 0;
		while(s2)
		{
			new_str[i] = s2[j];
			i++;
			j++;
		}
	}
	return (new_str)
}
