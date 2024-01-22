/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:40:58 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/07/05 15:16:32 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: function that returns a line read from a file descriptor.
Parameters: fd: The file descriptor to read from
Return:
Read line: correct behavior
NULL: there is nothing else to read, or an error occurred
*/

#include "get_next_line.h"

static char	*ft_remove_line(char *storage, char *line)
{
	int		len_line;
	int		len_storage;
	char	*output;

	if (!line)
		return (NULL);
	len_line = ft_strlen(line);
	len_storage = ft_strlen(storage);
	output = ft_substr_gnl(storage, len_line, len_storage - len_line);
	free(storage);
	if (output[0] == '\0')
	{
		free(output);
		return (NULL);
	}
	return (output);
}

static char	*ft_buff_line(char *storage)
{
	int		i;
	char	*line;

	i = 0;
	if (storage[i] == '\0')
		return (NULL);
	while (storage[i] != '\0' && storage[i] != '\n')
		i++;
	if (storage[i] == '\n')
		i++;
	line = ft_substr_gnl(storage, 0, i);
	if (!line)
	{
		free(line);
		return (NULL);
	}
	return (line);
}

static int	ft_count_nl(char *str)
{
	int	i;
	int	nl;

	i = 0;
	nl = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (nl);
}

static char	*ft_read_fd(int fd, char *storage)
{
	char	*buffer;
	int		read_rtrn;

	read_rtrn = 1;
	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	if (!storage)
		storage = "";
	while (ft_count_nl(storage) == 0 && read_rtrn != 0)
	{
		read_rtrn = read(fd, buffer, BUFFER_SIZE);
		if (read_rtrn == -1)
		{
			if (*storage)
				free(storage);
			free(buffer);
			return (NULL);
		}
		buffer[read_rtrn] = '\0';
		if (read_rtrn > 0)
			storage = ft_strjoin_gnl(storage, buffer);
	}
	free(buffer);
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	storage = ft_read_fd(fd, storage);
	if (!storage)
		return (NULL);
	line = ft_buff_line(storage);
	storage = ft_remove_line(storage, line);
	return (line);
}

/* int	main(void)
{
	int fd;
	char path[] = "./1char.txt";
	fd = open(path, O_RDONLY); // Open file for reading only.
	char *s = get_next_line(fd);
	char *s1 = get_next_line(fd);
	char *s2 = get_next_line(fd);
	char *s3 = get_next_line(fd);
	char *s4 = get_next_line(fd);
	printf("%s\n", s);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
	printf("%s\n", s4);
	free(s);
	free(s1);
	free(s2);
	free(s3);
	free(s4);

	close(fd);
} */