/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazz <jazz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:31:54 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/25 01:13:54 by jazz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: Applies the function ’f’ on each character of the string passed 
as argument, passing its index as first argument. Each character is passed by
address to ’f’ to be modified if necessary
Parameters: s: The string on which to iterate.
f: The function to apply to each character.*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void    f(unsigned int i, char *a)
	//essa funcao pode ser escrita de muitas formas qual transformacao for desejada.
{
    a = a + i;
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
    ft_striteri(s, &f);
    ft_print_res(s);
} */