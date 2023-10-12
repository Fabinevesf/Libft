/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiananeves <fabiananeves@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:59:18 by faneves           #+#    #+#             */
/*   Updated: 2023/10/12 13:29:59 by fabiananeve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t count_integers(int n)
{
  size_t count;

  count = 0;
  if (n < -2147483647)
    return (11);
  if (n == 0)
    return (1);
  if (n < 0)
  {
     n = n * (-1);
     count++;
  }
  if (n > 9)
  {
    while (n > 9)
    {
       n = n/10;
       count++;
    }
  }
  return (count + 1);
}

void fill(char *new, int n, int len)
{
 size_t	i;

	i = len;
	if (n < 0)
	{
		new[0] = '-';
		n = n * (-1);
		len = len - 1;
	}
	while (len > 0)
	{
		new[i] = n % 10 + '0';
		n = n / 10;
		i--;
		len--;
	}
	new[i] = n + '0';
}

char *ft_itoa(int n)
{
    char *new;
    size_t len;

    len = count_integers(n);
    if (n == -2147483648)
       return (ft_strdup("-2147483648"));
    new = (char *)ft_calloc(sizeof(char), len + 1);
    if (!new)
       return (NULL);
    fill(new, n, len - 1);
    return (new);
}
