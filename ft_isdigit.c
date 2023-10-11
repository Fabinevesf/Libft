/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:07:11 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 12:21:52 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

/*
int	main(int argc, char *argv[])
{
	char	n;

	(void)argc;
	(void)argv;
	n = 9;
	printf("%i\n", ft_isdigit(n));
	return (0);
}
*/