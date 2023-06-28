/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazz <jazz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:19:40 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/25 00:19:50 by jazz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: The function compare two strings and return the difference between
s1 - s2. The return will be the subtraction of s1-s2 in ANSI values.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
		while ((((unsigned char)s1[i] == (unsigned char)s2[i])
				&& (unsigned char)s1[i] && (unsigned char)s2[i]) && i < n)
			i++;
	if ((unsigned char)s1[i] != (unsigned char)s2[i] && n > 0 && i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
    const char *s1 = "1234";
    const char *s2 = "1235";
    size_t n = 0;
    
    printf("%d\n", ft_strncmp(s1,s2, n));
	//printf("%d\n", strncmp(s1, s2, n));
 }*/