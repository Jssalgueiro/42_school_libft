/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:35:41 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/05 14:18:17 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: The  memset() function fills the first n bytes of the memory area
 pointed to by s with the constant byte c. The memset() function returns a 
 pointer to the memory area s.*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr++ = c;
	}
	return (s);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
    char s[] = "teste";
    char x[] = "teste";
    printf("%s\n", s);
    ft_memset(s, '$', 2);
    printf("%s\n", s);
    printf("%s\n", x);
    memset(x, '$', 2);
    printf("%s\n", x);
}*/