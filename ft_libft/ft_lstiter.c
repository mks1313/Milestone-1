/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:05:19 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/17 19:18:02 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int main(void)
{
	// Crear contenido dinámicamente
	char *content1 = ft_strdup("Nodo 1");
	char *content2 = ft_strdup("Nodo 2");
	char *content3 = ft_strdup("Nodo 3");

	// Crear nodos
	t_list *node1 = ft_lstnew((void *)content1);
	t_list *node2 = ft_lstnew((void *)content2);
	t_list *node3 = ft_lstnew((void *)content3);

	if (!node1 || !node2 || !node3)
	{
		printf("Error al crear nodos.\n");
		return (1);
	}
	// Enlazar nodos
	node1->next = node2;
	node2->next = node3;
	// Crear la lista
	t_list *list = node1;
	// Iterar sobre la lista e imprimir su contenido
	ft_lstiter(list, print_content);
	// Limpiar la memoria (opcional)
	ft_lstclear(&list, free);
	return (0);
}*/
