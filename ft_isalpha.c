/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:49:58 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 11:13:42 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (2);
	else if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/*int	main(int argc, char *argv[])
{
	char	n;

	(void)argc;
	(void)argv;
	n = '+';
	printf("%i\n", ft_isalpha(n));
	return (0);
}*/