/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiananeves <fabiananeves@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:57:16 by faneves           #+#    #+#             */
/*   Updated: 2023/10/12 15:14:03 by fabiananeve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  size_t i;
  size_t sizeAll;
  char *result;

  if(!s1 || !s2)
  {
   if (s1)
     return (ft_strdup(s1));
   else if (s2)
     return (ft_strdup(s2));
   else
     return (ft_strdup(""));
  }
  sizeAll = ft_strlen(s1) + ft_strlen(s2);
  result = (char *)malloc((sizeAll + 1) * sizeof(char));
  if (!result)
    return (NULL); //verificar se nao eh melhor com result
  i = 0;
  while (*s1)
    result[i++] = *s1++;
  while (*s2)
    result[i++] = *s2++;
  result[i] = '\0';
  return (result);
}
/*
int  main(void)
{
 char *str_prefix = ".";
 char *str_suffix = "Fabiana";
 printf("%s\n", ft_strjoin(str_prefix, str_suffix));
 return (0);
}
*/