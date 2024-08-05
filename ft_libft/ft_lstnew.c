/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:24:56 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/15 11:25:25 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
#include <stdio.h>

int	main(void)
{
char	*s = "Hello, world!";
t_list 	*node;

node = ft_lstnew(s);
if(node)
{
printf("Node content: %s\n", (char *)node->content);
printf("Node next: %p\n", (void *)node->next);
}
else
printf("Memory allocation failed\n");
free(node);
return (0);
}*/
