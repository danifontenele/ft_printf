/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 21:09:36 by calvares          #+#    #+#             */
/*   Updated: 2025/11/11 23:59:01 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress_hex(unsigned long nb)
{
	int		re;
	char	*base;

	re = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
		re += ft_putaddress_hex(nb / 16);
	re += ft_putchar(base[nb % 16]);
	return (re);
}

int	ft_putaddress(unsigned long nb)
{
	int	re;

	if (nb == 0)
		return (write (1, "(nil)", 5));
	re = 0;
	re += write(1, "0x", 2);
	re += ft_putaddress_hex(nb);
	return (re);
}

/* int main(void)
{
	int a = 42;
	int *p = &a;
	
	ft_putaddress((unsigned long) p); ft_putchar('\n');
} */
