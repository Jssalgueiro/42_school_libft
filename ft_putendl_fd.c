/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazz <jazz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:55:53 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/26 10:14:33 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: Outputs the string ’s’ to the given file descriptor
followed by a newline.
Parameters: 
s: The string to output. fd: The file descriptor on which to write.*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/* int main()
{
    char    *i;
    i = "teste";
	ft_putendl_fd(i, 1);
} */
