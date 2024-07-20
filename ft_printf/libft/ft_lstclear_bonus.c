/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:17:31 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/17 18:01:48 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}
/*
#include <stdlib.h>
#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	char	*content1 = ft_strdup("Nodo 1");
	char	*content2 = ft_strdup("Nodo 2");
	char	*content3 = ft_strdup("nodo 3");

	t_list	*node1 = ft_lstnew((void *)content1);
	t_list	*node2 = ft_lstnew((void *)content2);
	t_list	*node3 = ft_lstnew((void *)content3);

	if (!node1 || !node2 || !node3)
	{
		printf("Error al crear nodos.\n");
		return (1);
	}
	node1->next = node2;
	node2->next = node3;

	t_list *list = node1;
	ft_lstclear(&list, del);
	if (!list)
	{
		printf("LA LISTA SE HA LIMPIADO CORRECTAMENTE.\n");
	}
	else
	{
		printf("Error al limpiar lista.\n");
		return (0);
	}
}*/
