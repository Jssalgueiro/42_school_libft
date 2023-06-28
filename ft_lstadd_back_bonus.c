/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:30:48 by jazz              #+#    #+#             */
/*   Updated: 2023/05/26 09:20:19 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: Adds the node ’new’ at the end of the list.
Parameters: lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
Return: None.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
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
    t_list *l =  NULL;
    printf("%s\n", (char *)l);
    ft_lstadd_back(&l, ft_lstnew("1"));
    ft_lstadd_back(&l, ft_lstnew("2"));
    ft_lstadd_back(&l, ft_lstnew("2"));
    printlist(l);
} */