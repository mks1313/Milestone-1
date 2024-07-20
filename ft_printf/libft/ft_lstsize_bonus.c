/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:19:24 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/15 15:46:30 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*lista = ft_lstnew("hello!");
	ft_lstadd_front(&lista,ft_lstnew("world!"));
	ft_lstadd_front(&lista, ft_lstnew("hola"));

	int	num = ft_lstsize(lista);
	printf("Numero total de listas son: %d\n", num);
	while (lista)
	{
	printf("%s", (char *)lista->content);
	lista = lista->next;
	}
	return (0);
}*/
