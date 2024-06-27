
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:59:52 by mmarinov          #+#    #+#             */
/*   Updated: 2024/06/26 17:10:00 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	diff;

	diff = 0;
	while (diff < n && (s1[diff] != '\0' && s2[diff] != '\0'))
	{
		if (s1[diff] != s2[diff])
				{
				return ((unsigned char)s1[diff] - (unsigned char)s2[diff]);
				}
		diff++;
		if (diff == n)
		{
		return ((unsigned char)s1[diff] -(unsigned char)s2[diff]);
		}
		return(0);
	}

#include <stdio.h>

int	main(void)
{
char	*temp1 = "manIcomio";
char	*temp2 = "manafomnio";
size_t	num = 5;
int	result = ft_strncmp(temp1, temp2, num);
printf("la diferencia es: %d", result);
return(0);
}
