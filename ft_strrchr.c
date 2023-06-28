/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:39:17 by jessica           #+#    #+#             */
/*   Updated: 2023/05/26 09:31:03 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: The function returns a pointer to the last occurrence  of  the  
character  c  in  the string s.  functions return a pointer to the matched 
character or NULL  if  the character is not found.  The terminating null byte is 
considered part of the string, so that if c is specified as '\0',
these functions return a pointer to the terminator.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temp;
	char	conv;

	conv = (char)c;
	temp = (char *)s;
	i = ft_strlen(temp);
	if (conv == '\0')
		return (&temp[i]);
	if (conv != '\0')
	{
		while (i >= 0)
		{
			if (temp[i] == conv)
			{
				return (&temp[i]);
			}
			i--;
		}
	}
	return (0);
}

/* int     main(void)
{
    char a[] = "tripouille";
    printf("%s\n",ft_strrchr(a, '\0'));
    //char *res = strrchr(a, c);
    //printf("%s", res);
} */