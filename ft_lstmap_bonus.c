/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:57:33 by jazz              #+#    #+#             */
/*   Updated: 2023/05/26 10:05:29 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new list resulting of 
the successive applications of the function ’f’. The ’del’ function 
is used to delete the content of a node if needed.
Parameters: 
lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list.
del: The address of the function used to delete
the content of a node if needed.
Return: The new list.
NULL if the allocation fails.
Comments: In this function there is a temporary node that get the content
from lst and modify with f function. Theses nodes are passed to function 
add_back to connect all the nodes in the variable list. Is not necessary
to increase the variable list. The function add_back get the address and
find the last node and add the new node without change the inicial address
in the lastmap function.
*/

#include "libft.h"

/*void    del(void *content)
{
    free(content);
}

void	*f(void *a) //essa funcao pode ser escrita de muitas formas,
{
    char *s;
	int i;
        
    s = (char *)a;
	i = 0;
	while (s[i])
	{
    	s[i] = s[i] - 32;
		i++;
	}
    return(s);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;

	list = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}

/*static void    printlist(t_list *lst)
{
    if (lst == NULL)
        printf("%s\n", (char *)lst->content);
    while(lst != NULL)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
}

int	main(void)
{
    t_list *l = ft_lstnew(strdup("xxxx"));
 	t_list *ret;
 
 	l->next = ft_lstnew(strdup("xxx"));
 	l->next->next = ft_lstnew(strdup("xx"));
    printlist(l);
 	ret = ft_lstmap(l, f, del);
    printlist(ret);
}*/