/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:20:40 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/23 17:08:45 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: Applies the function ’f’ to each character of the string ’s’, 
and passing its index as first argument to create a new string (with malloc(3)) 
resulting from successive applications of ’f’.
Parameters: s: The string on which to iterate.
f: The function to apply to each character.
Return value: The string created from the successive applications of ’f’.
Returns NULL if the allocation fails*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*output;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	output = (char *)malloc(len + 1 * sizeof(*s));
	if (output == NULL)
		return (NULL);
	while (s[i])
	{
		output[i] = f(i, s[i]);
		i++;
	}
	output[i] = '\0';
	return (output);
}

/* char    f(unsigned int i,
		char a)//essa funcao pode ser escrita de muitas formas,
	qual transformacao for desejada.
{
    return (i + a);
}

void	ft_print_res(char const *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int	main(void)
{
    char *s = "1234";
    s = ft_strmapi(s, *f);
    ft_print_res(s);
} */