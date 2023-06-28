/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazz <jazz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:15:22 by jessica           #+#    #+#             */
/*   Updated: 2023/05/24 14:06:53 by jazz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: This function count the number of bytes of the string without 
the null.*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/* int main(void)
{
    const char    a [] = "sasuahskldjkas][]djsakd2536";
     
    printf("%lu\n", ft_strlen(a));
    printf("%lu", strlen(a));    
    return (0);
} */
