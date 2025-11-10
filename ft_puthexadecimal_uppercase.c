/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal_uppercase.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 21:08:58 by calvares          #+#    #+#             */
/*   Updated: 2025/11/09 23:33:13 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexadecimal_uppercase(unsigned int nb)
{
	int		re;
	char	*base;

	base = "0123456789ABCDEF";
	re = 0;
	if (nb >= 16)
	{
		re += ft_puthexadecimal_uppercase(nb / 16);
		re += ft_puthexadecimal_uppercase(nb % 16);
	}
	else
		re += ft_putchar(base[nb % 16]);
	return (re);
}

/* int main(void)
{
	ft_puthexadecimal_uppercase(123); ft_putchar('\n');
	ft_puthexadecimal_uppercase(1234); ft_putchar('\n');
	ft_puthexadecimal_uppercase(127); ft_putchar('\n');
	ft_puthexadecimal_uppercase(255); ft_putchar('\n');
} */