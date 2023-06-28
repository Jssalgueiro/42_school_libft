/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:13:17 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/05/05 14:16:32 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Description: The function allocate memory and copy the s1 to a new string 
 without characters specified on set in the begin and the end.
 Returns null if no allocate or the trimmed string.
*/

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(&s1[i], 0, j - i + 1));
}

/* int    main(void)
{
    const char *s1 = "        ";
    const char *set = " ";
    printf("%s\n", ft_strtrim(s1, set));
} */
//como resolver os nulos e o erro de alocacao?