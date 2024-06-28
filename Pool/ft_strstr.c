/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:28:31 by mmarinov          #+#    #+#             */
/*   Updated: 2024/05/13 10:59:00 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr1;
	char	*ptr2;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		ptr1 = str;
		ptr2 = to_find;
		while ((*ptr1 != '\0' && *ptr2 != '\0') && *ptr1 == *ptr2)
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr2 == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}
