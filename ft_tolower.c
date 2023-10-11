/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:31:33 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 11:15:04 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int	main(int argc, char *argv[])
{
	char	n;

	(void)argc;
	(void)argv;
	n = 'k';
	printf("%c\n", ft_tolower(n));
	return (0);
}*/