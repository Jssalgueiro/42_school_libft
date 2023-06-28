/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:01:59 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/26 09:20:34 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: Adds the node ’new’ at the beginning of the list.
Parameters: 
lst: The address of a pointer to the first link of a list.
new: The address of a pointer to the node to be added to the list.*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/* int main()
{
	t_list	*l;

    l = NULL;
    printf("%s\n", (char *)l);
    ft_lstadd_front(&l, ft_lstnew("1"));
    printf("%s\n", (char *)l->content);
} */