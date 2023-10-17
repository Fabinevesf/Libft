/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiananeves <fabiananeves@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:00:06 by faneves           #+#    #+#             */
/*   Updated: 2023/10/15 13:49:19 by fabiananeve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
 char *new;
 unsigned int i;

 i = 0;
 new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
 if (!new)
    return (NULL);
 while (s[i])
 {
   new[i] = (*f)(i, s[i]);
   i++;
 }
new[i] = '\0';
return (new);
}