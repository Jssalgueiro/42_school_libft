/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:55:43 by jazz              #+#    #+#             */
/*   Updated: 2023/05/26 10:04:30 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: Allocates (with malloc(3)) and returns a string representing the 
integer received as an argument. Negative numbers must be handled. The string 
representing the integer. NULL if the allocation fails.*/

#include "libft.h"

static int	ft_strl(long int i)
{
	int	len;

	len = 0;
	if (i == 0)
		len = 1;
	while (i > 0)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*output;
	int			minus;
	long int	len;
	long int	conv;

	conv = n;
	minus = 0;
	if (n < 0)
	{
		minus = 1;
		conv = conv * -1;
	}
	output = (char *)malloc((len = ft_strl(conv)) + 1 + minus);
	if (output == NULL)
		return (NULL);
	if (minus == 1)
		output[0] = '-';
	output[len + minus] = '\0';
	while (len > 0)
	{
		output[len + minus - 1] = (conv % 10) + 48;
		conv = conv / 10;
		len--;
	}
	return (&output[0]);
}

/* void    ft_print_result(char const *s)
{
    int        len;

    len = 0;
    while (s[len])
        len++;
    write(1, s, len);
}

int	main(void)
{
    int n = -2147483648LL;
    char  *res = ft_itoa(n);
    ft_print_result(res);
} */
