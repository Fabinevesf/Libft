/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:01:59 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 17:27:27 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

void ft_putstr_fd(char *s, int fd)
{
	fd = 0;
	while (s[fd] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char*	c;

	c = "Fabiana linda";
	ft_putstr_fd(c);
}