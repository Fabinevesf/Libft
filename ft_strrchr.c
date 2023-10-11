/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:37:45 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 14:52:40 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}

/*int	main(void)
{
	const char	str[] = "Fabiana.Neves";
	const char	c = '.';
	char	*ret;

	ret = ft_strrchr(str, c);
	if (ret != '\0')
		printf("Ultima ocorrencia de '%c' encontrada em '%s'", c, ret);
	else
		printf("'%c' nao encontrado na string.\n", c);
	return (0);
}*/
