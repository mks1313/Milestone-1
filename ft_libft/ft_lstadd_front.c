/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:26:14 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/17 13:25:26 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	char	*content1 = "Nodo 1";
	char	*content2 = "Nodo 2";
	char	*content3 = "Nodo 3";

	t_list *node1 = ft_lstnew((void *)content1);
	t_list *node2 = ft_lstnew((void *)content2);
	t_list *node3 = ft_lstnew((void *)content3);

	if (!node1 || !node2 || !node3)
	{
		printf("Error al crear nodos.\n");
		return (1);
	}

	t_list *list = NULL;

	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);

	t_list *current = list;
	while(current)
	{
		printf("Content: %s\n", (char *)current->content);
		current = current->next;
	}
	free(node1);
	free(node2);
	free(node3);
	return (0);
}*/
