/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:42:22 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 11:14:43 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}*/

/*void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)dest);
}
*/
char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*dup;

	len = ft_strlen((char *)src) + 1;
	dup = malloc(len);
	if (dup != NULL)
	{
		ft_memcpy(dup, (char *)src, len);
		return (dup);
	}
	return (NULL);
}

/*int	main(void)
{
    const char	*s1 = "fodasse";
    char	*s2 = ft_strdup(s1);
    if (s2 != NULL)
    {
        printf("s2 = %s\n", s2);
        free(s2);
    }
    return (0);
}
*/
