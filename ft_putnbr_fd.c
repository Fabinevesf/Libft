/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiananeves <fabiananeves@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:03:08 by faneves           #+#    #+#             */
/*   Updated: 2023/10/12 15:17:18 by fabiananeve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
  if (n == -2147483648)
      return (ft_putstr_fd("-2147483648", fd));
	if (n < 0)
 {
   ft_putchar_fd('-', fd);
   n = -n;
 }
 if (n >= 10)
   ft_putchar_fd(n / 10, fd);
 ft_putchar_fd(n % 10 + '0', fd);
}

/*
int main() {
    int num1 = 12345;
    int num2 = -9876;

    ft_putnbr_fd(num1, 1); // Imprime 12345 no console (stdout)
    ft_putchar_fd('\n', 1); // Nova linha no console
    ft_putnbr_fd(num2, 2); // Imprime -9876 no console de erro (stderr)
    ft_putchar_fd('\n', 2); // Nova linha no console de erro

    return 0;
}
*/