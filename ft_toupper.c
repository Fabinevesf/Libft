/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:46:29 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 11:15:07 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int	main(int argc, char *argv[])
{
	char	n;

	(void)argc;
	(void)argv;
	n = 'M';
	printf("%c\n", ft_toupper(n));
	return (0);
}
*/