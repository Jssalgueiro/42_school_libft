/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:30:31 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/25 13:59:09 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: The function check if the one char is a lowercase alphabet 
 * character and return the char in uppercase.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>

int	main(void)
{
    char a = 'a';
    printf("%c", ft_toupper(a));
    printf("%c", toupper(a));
} */
