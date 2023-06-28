/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:35:41 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/26 10:08:00 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: The function copy n bytes from src in to dest memory. Fist the bytes
is copy in temporary array and after the temporary array is copied to dest.
The return is a pointer to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p_src;
	char	*p_dest;
	size_t	i;

	p_src = (char *)src;
	p_dest = (char *)dest;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	else
	{
		while (n--)
			p_dest[n] = p_src[n];
	}
	return (dest = p_dest);
}

/* int main()
{
  int size = 134217728;
 	char *dst = (char *)malloc(sizeof(char) * size);
 	char *data = (char *)malloc(sizeof(char) * size);
 
 	memset(data, 'A', size);
 	ft_memmove(dst, data, size);
  printf("%s\n", dst);
} */