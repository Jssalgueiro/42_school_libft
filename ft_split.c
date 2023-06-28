/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 19:13:20 by jazz              #+#    #+#             */
/*   Updated: 2023/05/26 09:26:12 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
Parameters: s: The string to be split. c: The delimiter character.
Return:The array of new strings resulting from the split.
NULL if the allocation fails.
*/

#include "libft.h"

static size_t	ft_strwcount(const char *str, char c)
{
	int	len;
	int	word;

	len = 0;
	word = 0;
	while (str[len])
	{
		while (str[len] == c)
			len++;
		if (str[len])
			word++;
		while (str[len] && str[len] != c)
			len++;
	}
	return (word);
}

static void	ft_array(char **output, char const *s, char c)
{
	char		**output_array;
	char const	*temp;

	temp = s;
	output_array = output;
	while (*temp)
	{
		while (*s == c)
			++s;
		temp = s;
		while (*temp && *temp != c)
			++temp;
		if (*temp == c || temp > s)
		{
			*output_array = ft_substr(s, 0, temp - s);
			s = temp;
			++output_array;
		}
	}
	*output_array = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**output;

	output = (char **)malloc((ft_strwcount(s, c) + 1) * sizeof(char *));
	if (output == NULL)
		return (NULL);
	ft_array(output, s, c);
	return (output);
}

/* int main(void)
{
    char    *temp;
    char     c = 'i';
    temp = "lorem ipsum dolor sit amet,
	consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor,
	dignissim sit amet, adipiscing nec, ultricies sed,
	dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a,
	semper congue, euismod non, mi.";
   
    char **array = ft_split(temp, c);
    int i;
    for(i = 0; i < 36; i++)  
    {  
        printf("%s\n", array[i]);
    }
} */
