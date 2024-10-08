/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:32:40 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/18 12:11:56 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>

// Función de transformación para pruebas.
void *double_content(void *content)
{
    int *new_content = (int *)malloc(sizeof(int));
    if (new_content)
        *new_content = *(int *)content * 2;
    return new_content;
}

// Función de eliminación para pruebas.
void delete_content(void *content)
{
    free(content);
}

// Función para imprimir una lista de enteros.
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", *(int *)(lst->content));
        lst = lst->next;
    }
    printf("NULL\n");
}

int	main(void)
{
    // Crear una lista simple de enteros.
    int a = 1, b = 2, c = 3;
    t_list *lst = ft_lstnew(&a);
    ft_lstadd_back(&lst, ft_lstnew(&b));
    ft_lstadd_back(&lst, ft_lstnew(&c));

    // Imprimir la lista original.
    printf("Lista original:\n");
    print_list(lst);

    // Crear una nueva lista aplicando la función double_content.
    t_list *new_lst = ft_lstmap(lst, double_content, delete_content);

    // Imprimir la nueva lista.
    printf("Nueva lista (contenido duplicado):\n");
    print_list(new_lst);

    // Limpiar la memoria.
    ft_lstclear(&new_lst, delete_content);
    ft_lstclear(&lst, NULL); // No necesita borrar el cont. orig, es estático.

    return 0;
}*/
