/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:16:20 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 14:42:53 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		str++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}
/*int	main(int argc, char *argv[])
{
	const char	*string = "puta que pariu.";
	char		c = 'q';
	char		*result;

	(void)argc;
	(void)argv;
	result = ft_strchr(string, c);
	
	if (result != NULL)
		printf("Encontrado: %s\n", result);
	else
		printf("Caractere nao encontrado. \n");
	return (0);
}*/
