/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:30:31 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/04/17 11:55:21 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: The function check if the one char is a ASCII 7-bits character 
(128 characters) and return 1 if is true.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}

/* #include <stdio.h>
#include <ctype.h>

int	main(void)
{
    unsigned char z = 128; //euro
    printf("%d\n", ft_isascii(z));
	printf("%d", isascii(z));
} */