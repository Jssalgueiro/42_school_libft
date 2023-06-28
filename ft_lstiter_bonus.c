/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:41:32 by jazz              #+#    #+#             */
/*   Updated: 2023/05/26 09:22:27 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: Iterates the list ’lst’ and applies the function
’f’ on the content of each node.
Parameters: lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list.
Return: None.
*/

//COMENTAR PASSO A PASSO E REVISAR

#include "libft.h"

/* 
void	f(void *a) //essa funcao pode ser escrita de muitas formas,
	qual transformacao for desejada.
{
    char *s;
        
    s = (char *)a;
    (void)s;
    *s = *s + 32;
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
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
    t_list *l;

    l = ft_lstnew(strdup("A"));
    ft_lstadd_back(&l, ft_lstnew(strdup("B")));
    ft_lstadd_back(&l, ft_lstnew(strdup("C")));
    ft_lstadd_back(&l, ft_lstnew(strdup("D")));
    printlist(l);
    ft_lstiter(l, &f);
    printlist(l);
}*/
