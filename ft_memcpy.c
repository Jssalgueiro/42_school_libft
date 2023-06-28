/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:35:41 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/26 10:18:38 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: The function copy the memory from src in n bytes to dst 
 * without erase the memory. The return is dst.
 * Start to create two variables unsigned char to cast the void src and dst
 *  it is to guarantee the correct atribuition. If is false/null return dst,
 *  or do the cast and start the atribuition with n size. The value inside 
 *  'src/s' address is copy to 'dst/d' address. The function return dst,
 *  because is same address that d and is a void variable like the function.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!dst && !src)
		return (dst);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (n--)
		*d++ = *s++;
	return (dst);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
    //printf("%s\n", (char *)ft_memcpy("jjjjjjjjjjjjjjjjjjjjjjjjjjjjjj",
			"zyxwvutsrqponmlkjihgfedcba", 14));
    printf("%s\n", (char *)memcpy("jjjjjjjjjjjjjjjjjjjjjjjjjjjjjj",
			"zyxwvutsrqponmlkjihgfedcba", 14));
}
*/
