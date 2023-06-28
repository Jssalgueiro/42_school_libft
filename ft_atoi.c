/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazz <jazz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:35:07 by jessica           #+#    #+#             */
/*   Updated: 2023/05/25 00:18:25 by jazz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	* Description: the function executes a transformation from a string to a integer
 * this function converts the inicial portion of the string pointed to integer.
 * Eliminating the blank spaces and preserve the number signal.
*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	minus;

	res = 0;
	while ((*nptr > 8 && *nptr < 14) || *nptr == 32)
		nptr++;
	if (*nptr == '-')
	{
		minus = 1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr != '\0' && (*nptr >= 48 && *nptr <= 57))
	{
		res = res * 10;
		res = (res + *nptr) - 48;
		nptr++;
	}
	if (minus == 1)
		res = (-res);
	return (res);
}

/*int     main(void)
{
    const char nptr [] = "----1a234abjh45484215";

    printf("%d\n", ft_atoi(nptr));
    //printf("%d", atoi(nptr));	
}*/
