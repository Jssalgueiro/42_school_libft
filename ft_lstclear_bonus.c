/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:48:10 by jazz              #+#    #+#             */
/*   Updated: 2023/05/26 09:21:23 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: Deletes and frees the given node and every
successor of that node, using the function ’del’
and	free(3).
Finally, the pointer to the list must be set to
NULL.
Parameters: lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
Return: None.
*/

#include "libft.h"

/*
static void	*del(void)
{
    return(NULL);
}
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pointer;

	pointer = *lst;
	if (!pointer)
		return ;
	while (pointer != NULL)
	{
		pointer = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = pointer;
	}
}

/*
static void	printlist(t_list *lst)
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
    t_list *l;
    l = ft_lstnew("1");
    ft_lstadd_back(&l, ft_lstnew("1"));
    ft_lstadd_back(&l, ft_lstnew("2"));
    ft_lstadd_back(&l, ft_lstnew("3"));
    printlist(l);
    ft_lstclear(&l, (void *)&del);
    printlist(l);
}*/
