/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:03:08 by faneves           #+#    #+#             */
/*   Updated: 2023/10/17 15:51:18 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
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