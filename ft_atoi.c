/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:47:21 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 14:15:47 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	negative;

	result = 0;
	i = 0;
	negative = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * negative);
}
/*
int	main(void)
{
	char	str[];
	int		val;

	val = ft_atoi(str);
	str[] = "--+15454";
	printf("%i ", val);
	return (0);	
}
*/