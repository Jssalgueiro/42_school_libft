/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:09:13 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/26 10:08:42 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: Outputs the integer ’n’ to the given file descriptor.
Parameters: n: The integer to output. fd: The file descriptor on which 
to write.*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	conv;

	conv = n;
	if (conv < 0)
	{
		conv = conv * -1;
		ft_putchar_fd('-', fd);
	}
	if (conv > 9)
	{
		ft_putnbr_fd((conv / 10), fd);
		ft_putchar_fd((conv % 10 + 48), fd);
	}
	else
		ft_putchar_fd((conv + 48), fd);
}

/* int main()
{
    int    i;
    i = -2147483648;
		ft_putnbr_fd(i, 4);
} */
