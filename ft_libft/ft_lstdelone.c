/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:33:14 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/17 18:02:40 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	char	*content1 = ft_strdup("Nodo1");
	char	*content2 = ft_strdup("content of second node");

	t_list	*node1 = ft_lstnew((void *) content1);
	t_list	*node2 = ft_lstnew((void *) content2);

	if (!node1 || !node2)
	{
		printf("Error a crear nodos.\n");
		return (1);
	}

	node1->next = node2;
	ft_lstdelone(node1, del);
	printf("Contenido del Nodo2: %s\n", (char *)node2->content);
	free(node2->content);
	free(node2);
	return (0);
}*/
