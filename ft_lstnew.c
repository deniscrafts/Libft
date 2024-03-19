/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:46:35 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/20 20:47:23 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof (*element));
	if (!(element))
		return (NULL);
	element -> content = content;
	element -> next = NULL;
	return (element);
}

/* int main()
{
    t_list *new_node = ft_lstnew("Hola, mundo");

    if (new_node != NULL)
    {
        printf("Contenido del nuevo nodo: %s\n", (char *)new_node->content);
        free(new_node);
    }
    else
        printf("Error al crear el nuevo nodo\n");
    return (0);
} */
