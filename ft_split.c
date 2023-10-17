/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:58:31 by faneves           #+#    #+#             */
/*   Updated: 2023/10/17 13:00:39 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
	return (0);
}

size_t	count_c(char const *s, char c)
{
	int		i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	split(char const *s, char **new, char c)
{
	size_t	i;
	size_t	j;
	size_t	z;

	i = 0;
	j = 0;
	z = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] != c)
		{
			while (s[i + j] != c && s[i + j])
				j++;
			new[z] = ft_substr(s, i, j);
			if (!new[z])
				return (ft_free(new, z));
			z++;
			i = i + j;
		}
		else
			i++;
	}
	new[z] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**new;

	new = (char **)malloc(sizeof(char *) * (count_c(s, c) + 1));
	if (!new)
		return (NULL);
	if (split(s, new, c) == 0)
		return (NULL);
	return (new);
}
