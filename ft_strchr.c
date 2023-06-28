/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:39:17 by jessica           #+#    #+#             */
/*   Updated: 2023/05/26 09:26:24 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: The function returns a pointer to the first character == c.
The c can be the null byte, and the null return one happen when the c doesn't
exist in the string.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	unsigned int	len;
	char			*temp;
	char			conv;

	conv = (char)c;
	temp = (char *)s;
	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (temp[i] == conv)
			return (&temp[i]);
		i++;
	}
	return (NULL);
}

/* int     main(void)
{
    const char    *a = "teste";
    int c = 'a';
    printf("%s\n",ft_strchr(a, c));
    //char *res = strchr(a, c);
    //printf("%s", res);
}*/