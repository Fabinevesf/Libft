/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:58:02 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 12:31:52 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = s;
	while (n--)
		*p++ = c;
	return (s);
}

// int	main(int argc, char *argv[])
// {
// 	char	test[10];

// 	(void)argc;
// 	(void)argv;
// 	ft_memset(test, 9);
// 	printf("%s \n", test);
// 	return (0);
// }