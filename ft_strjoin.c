/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:13:17 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/05 14:17:13 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Description: The function allocate memory to join two strings, copy the
 both and return the string final.
*/

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		len1;
	int		len2;
	char	*output;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	output = malloc((len1 + len2 + 1) * sizeof(char));
	if (output == NULL)
		return (0);
	else
	{
		output = ft_strcpy(output, s1);
		output = ft_strcpy(&output[len1], s2);
		output = &output[-len1];
	}
	return (output);
}

/* #include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
    const char *start = "abc";
    const char *end = "def";    
    printf("%s\n", ft_strjoin(start, end));
} */