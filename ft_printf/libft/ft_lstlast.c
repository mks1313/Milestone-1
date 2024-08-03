/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:29:38 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/15 15:54:15 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*list = ft_lstnew("Nodo 1");
	t_list	*node2 = ft_lstnew("Node 2");
	t_list	*node3 = ft_lstnew("Node 3");

	list->next = node2;
	node2->next = node3;

	t_list *last = ft_lstlast(list);
	if (last)
		printf("El content of the last node is: %s\n", (char *)last->content);
		printf("direccion es %p\n", last);
	free(node3);
	free(node2);
	free(list);
	return (0);
}*/
