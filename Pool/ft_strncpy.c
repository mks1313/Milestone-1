/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:51:30 by mmarinov          #+#    #+#             */
/*   Updated: 2024/05/07 11:38:53 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*init;

	init = dest;
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (init);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("antes:\n s1: %s\n s2: %s\n", argv[1], argv[2]);
		ft_strncpy(argv[1], argv[2], 3);
		printf("despues:\n s1: %s\n s2: %s\n", argv[1], argv[2]);
	}
	return (0);}
*/
