/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:40:05 by jessica           #+#    #+#             */
/*   Updated: 2023/05/26 09:40:38 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: The function concatenate strings and returns the total length of 
the string. If the dest doesn`t have space to concatenate (size > dest) the 
return is the total the length that the function tried to create and the 
function doesn't concat. If the function has a space to concat (size > dest
+1) the return is the total length
that was possible to concat (size -1), and the src should be cut.
The src and dst must be NUL-terminated.
Attention: If the string dst is not NULL terminated (memset),
	we can not use the null terminate to count
the lenght.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (dst_len < size - 1 && src[i] != '\0')
	{
		dst[dst_len] = src[i];
		i++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
    char    dest[15];
    memset(dest, 0, (15*sizeof(char)));
    memset(dest, 'r', 15);
    const char src [] = "lorem ipsum dolor sit amet";
 
    size_t dst_size = 5;
    printf("%lu\n%s", ft_strlcat(dest, src, dst_size), dest);
} */