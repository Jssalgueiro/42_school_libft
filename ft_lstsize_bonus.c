/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:39:50 by jazz              #+#    #+#             */
/*   Updated: 2023/05/26 09:23:13 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: Counts the number of nodes in a list.
Parameters: lst: The beginning of the list.
Return: The length of the list (int).
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/* int main()
{
    char *valor;
    valor = "teste";
    printf("%i\n", ft_lstsize(ft_lstnew(valor)));
}*/