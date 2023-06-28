/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:13:17 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/05 14:05:03 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: The function allocates memory for an array of n elements (count)
with a specific size (size) and returns a pointer. The memory is set with zeros.
If count or size is 0, the returns is null.  
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*output;
	size_t			i;

	i = 0;
	output = malloc(count * size);
	if (output == NULL)
		return (0);
	while (i < count * size)
		output[i++] = 0;
	return (output);
}

/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	i = 25;
	char *teste = ft_calloc(5, 5);
	while (i)
		printf("%c\n", teste[i--]);
	printf("%s\n", (char *)calloc(5, 5));
}*/
