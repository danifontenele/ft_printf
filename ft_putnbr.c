/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 21:09:02 by calvares          #+#    #+#             */
/*   Updated: 2025/11/09 23:34:33 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	long	n;
	int		re;

	re = 0;
	n = nb;
	if (n < 0)
	{
		re += write (1, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		re += ft_putnbr(n / 10);
		re += ft_putnbr(n % 10);
	}
	else
		re += ft_putchar(n + '0');
	return (re);
}

/* int main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-42); 
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
} */