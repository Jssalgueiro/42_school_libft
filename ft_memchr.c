/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:39:17 by jessica           #+#    #+#             */
/*   Updated: 2023/05/26 10:07:27 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The	memchr(void) function locates the first occurrence of c (converted to 
an unsigned char) in string s.
The	memchr(void) function returns a pointer to the byte located,
	or NULL if no such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	unsigned char	conv;

	conv = (unsigned char)c;
	while (n-- > 0)
	{
		temp = (unsigned char *)s;
		if (*temp == conv)
			return (temp);
		s++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
    unsigned char c = '0';
	size_t n = 1;
    printf("%s\n",ft_memchr(s, c, n));
    //char *res = memchr(s, c, n);
    //printf("%s", res);
} */
