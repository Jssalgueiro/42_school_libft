/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:08:40 by jessica           #+#    #+#             */
/*   Updated: 2023/05/26 09:42:43 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: The function copy strings and returns the total buffer size of 
the string. The function copies up to size - 1 characters.
If the dest doesn`t have space to copy (size < dest) the return is the total 
the length that the function tried to create (src). 
The src must be NUL-terminated.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = ft_strlen(src);
	if (size == 0)
		return (c);
	while (src[i] != '\0' && i < (size - 1) && size > 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (c);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
    char    dest[10];
    memset(dest, 0, (10*sizeof(char)));
    memset(dest, 'A', 10);
    const char src [] = "coucou";
    size_t dst_size = 0;
    printf("%lu\n%s", ft_strlcpy(dest, src, dst_size), dest);
}*/