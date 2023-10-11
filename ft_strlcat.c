/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:14:33 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 12:15:50 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}*/

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	lensrc;

	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	i = 0;
	if (size == 0 || size <= lendest)
	{
		return (size + lensrc);
	}
	while (i < (size - 1 - lendest) && src[i] != '\0')
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lensrc + lendest);
}

/*int	main(void)
{
	char	src[10] = "Fabiana";
	char	dest[10] = "ola";
    
	printf("%i ", ft_strlcat(dest, src, 0));
	return (0);
}*/
