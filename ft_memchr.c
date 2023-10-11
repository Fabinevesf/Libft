/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:40:41 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 15:26:04 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s;
	size_t				i;

	s = (const unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	str[] = "Hello, World!";
	int	search_char = 'P';
	void	*result = ft_memchr(str, search_char, sizeof(str));

	if (result != NULL)
        	printf("O caractere '%c' foi encontrado em %p\n", search_char, result);
	else
        	printf("O caractere '%c' não foi encontrado\n", search_char);
	return (0);
}*/