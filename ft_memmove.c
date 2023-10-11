/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:18:01 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 14:33:46 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char		*original;
	unsigned char		*copia;

	original = (unsigned char *)str2;
	copia = (unsigned char *)str1;
	if (copia > original)
	{
		while (n > 0)
		{
			copia[n - 1] = original[n -1];
			n--;
		}
	}
	else
		ft_memcpy(str1, str2, n);
	return (str1);
}

/*int	main(void)
{
	char		dest[] = "p";
	const char	src[] = "fabianahhhhhhhhhhhhhhhhhhhhhhhhhhhh";

	ft_memmove(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}*/
