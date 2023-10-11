/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:37:38 by faneves           #+#    #+#             */
/*   Updated: 2023/10/09 15:58:27 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	test[10];

	(void)argc;
	(void)argv;
	ft_bzero(test, 9);
	printf("%s \n", test);
	return (0);
}*/