/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:35:41 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/05 14:19:48 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: The  bzero()  function  erases  the  data in the n bytes of the 
memory starting at the location pointed to by s, by writing zeros (bytes 
containing '\0') to that area. No return.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;

	c = s;
	while (n--)
	{
		*c++ = 0;
	}
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
    char s[] = "teste";
    char x[] = "teste";
    printf("%s\n", s);
    ft_bzero(s, 2);
    printf("%s\n", s);
    printf("%s\n", x);
    bzero(x, 2);
    printf("%s\n", x);
}*/