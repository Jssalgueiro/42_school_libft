/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:13:17 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/05 14:17:28 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Description: The function duplicate a string to a integer
 * this function converts the inicial portion of the string pointed to integer.
 * Eliminating the blank spaces and preserve the number signal.
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

char	*ft_strdup(const char *s)
{
	int		len;
	char	*output;

	len = ft_strlen(s);
	output = malloc((len + 1) * sizeof(char));
	if (output == NULL)
		return (0);
	else
		output = ft_strcpy(output, s);
	return (output);
}

/* #include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s;

	s = NULL;
	
	printf("%s\n", ft_strdup(s));
	//printf("%s\n", strdup(s));
}
 */