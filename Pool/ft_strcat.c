/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:44:05 by mmarinov          #+#    #+#             */
/*   Updated: 2024/05/09 11:58:36 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*concat;

	concat = dest;
	while (*dest != 0)
	{
		dest++;
	}
	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (concat);
}
