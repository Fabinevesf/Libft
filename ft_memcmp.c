/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:38:35 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 11:14:01 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1;
	const char unsigned	*s2;
	size_t				i;

	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	str1[] = "faan";
	const char	str2[] = "fabiana";

	int result = ft_memcmp(str1, str2, 10);
	if (result < 0)
        	printf("str1 é menor que str2\n");
    	else if (result > 0)
        	printf("str1 é maior que str2\n");
    	else
        	printf("str1 é igual a str2\n");
    return (0);
}*/