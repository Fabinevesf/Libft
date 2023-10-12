/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiananeves <fabiananeves@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:29:00 by faneves           #+#    #+#             */
/*   Updated: 2023/10/12 14:18:16 by fabiananeve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	if (start >= ft_strlen(s))
        	return (NULL);
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	while (len > 0 && s[start] != '\0')
	{
		newstr[i] = s[start];
		i++;
		len--;
		start++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*int	main(void)
{
	char const	*str = "Fabiana";
	unsigned int	index = 4;
	size_t		tamanho = 7;
	char *sub = ft_substr(str, index, tamanho);

	if(sub)
		free(sub);

	return (0);
}*/
