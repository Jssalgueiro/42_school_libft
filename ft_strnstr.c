/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:39:17 by jessica           #+#    #+#             */
/*   Updated: 2023/05/26 09:42:19 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: The function locates the first occurrence of the null-terminated 
string little in the string big, where not more than len characters are searched.
  Characters that appear after a ‘\0’ character are not searched.
Comments:
	//if the string to find is empty the ret is the big string
	//While the counter b (from big string) is less than len 
	(len is a space to find) and while the big string is true.
	//if the match occured the search inside the little start with the l counter
	//and the b counter stay stopped and b+l is limited for len.
	//In the end of little the address of b position is returned.
	*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	b;
	unsigned int	l;

	b = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[b] && b < len)
	{
		l = 0;
		if (big[b] == little[l])
		{
			while (big[b + l] == little[l] && b + l < len)
			{
				l++;
				if (little[l] == '\0')
					return ((char *)&big[b]);
			}
		}
		b++;
	}
	return (0);
}

/*
int	main(int argc, char **argv)
{
	argc = ft_atoi(argv[3]);
    printf("%s\n",ft_strnstr(argv[1], argv[2], argc));
	return(0);
}
*/