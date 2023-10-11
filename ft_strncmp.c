/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:23:39 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 15:27:13 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*x;
	unsigned char	*y;
	size_t			i;

	i = 0;
	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	while (i < n)
	{
		if (x[i] != '\0' && x[i] == y[i])
		{
			i++;
		}
		else
			return (x[i] - y[i]);
	}
	return (0);
}
/*int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d ", ft_strncmp(argv[1], argv[2], 5));
		printf("%d ", strncmp(argv[1], argv[2], 5));
	}
}*/
