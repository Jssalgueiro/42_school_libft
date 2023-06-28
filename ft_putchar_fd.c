/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:45:36 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/26 09:25:25 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: Outputs the character ’c’ to the given file
descriptor.
Parameters: c: The character to output.
fd: The file descriptor on which to write.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main()
{
    char    i;

    i = '0';
	while (i <= '9')
	{
		ft_putchar_fd(i, 1);
		i++;
	}
}
*/