/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:19:40 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/26 09:41:29 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: The function compare two strings within n characters and return 
the difference between s1- s2. The return will be the subtraction of s1-s2 in 
ANSI values and \200 is greather than \0 because is a unsigned char.*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*casts1;
	unsigned char	*casts2;

	casts1 = (unsigned char *)s1;
	casts2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (casts1[i] != casts2[i])
			return (casts1[i] - casts2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s2;
	size_t		n;

    const char *s1 = "zyxbcdefgh"; 
    s2 = "abcdefgxyz";
    n = 0;
    
    printf("%d\n", ft_memcmp(s1,s2, n));
	printf("%d\n", memcmp(s1, s2, n));
}
*/