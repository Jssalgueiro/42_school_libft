/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:58:38 by jazz              #+#    #+#             */
/*   Updated: 2023/05/26 09:21:41 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node. The memory of
’next’ must not be freed.
Parameters: lst: The node to free.
del: The address of the function used to delete
the content.
Return: None.
*/

#include "libft.h"

/* void    *del()
{
    return(NULL);
} */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/* static void    printlist(t_list *lst)
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
    printf("%s\n", (char *)l->content);
    ft_lstdelone(l, (void *)&del);
    printlist(l);
}  */