/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiananeves <fabiananeves@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:57:54 by faneves           #+#    #+#             */
/*   Updated: 2023/10/14 16:40:25 by fabiananeve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_set(char c, char const *set)
  {
    int i;

    i = 0;
    while (set[i])
    {
     if (c == set[i])
       return (1);
     i++;
    }
    return (0);
  }

char *ft_strtrim(char const *s1, char const *set)
{
  char *new;
  size_t end;
  size_t start;
  size_t len;

  start = 0;
  end = ft_strlen(s1);
  while (ft_set(s1[start], set))
    start++;
    if (start == end)
     return (ft_strdup(""));
    while (ft_set(s1[end - 1], set))
     end--;
    len = end - start;
    new = ft_substr(s1, start, len);
    return (new);
}