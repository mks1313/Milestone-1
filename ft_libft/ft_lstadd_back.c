/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:44:15 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/17 13:31:03 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*node1 = ft_lstnew("Node 1");
	t_list	*node2 = ft_lstnew("Node 2");
	t_list	*node3 = ft_lstnew("Node 3");

	node1->next = node2;
	node2->next = node3;

	t_list	*node4 = ft_lstnew("Node 4");
	ft_lstadd_back(&node1, node4);
	t_list	*current = node1;
	while (current)
	{
		printf(" Succesfuly at the end %s\n", (char *)current->content);
		current = current->next;
	}
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	return (0);
}*/
