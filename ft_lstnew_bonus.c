/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:29:43 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/26 10:16:16 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with the value of the parameter 
’content’. The variable ’next’ is initialized to NULL.
Parameters: content: The content to create the node with.
Returns: The new node.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n;

	n = malloc(sizeof(t_list));
	if (!n)
		return (NULL);
	n->content = content;
	n->next = NULL;
	return (n);
}

/* int main()
{
    char *valor;
    t_list *n;
    
    valor = "teste";
    n = ft_lstnew(valor);

    while ( n != NULL)
    {
        printf("%s\n", (char *)n->content);
        n = n->next;
    }
}*/
