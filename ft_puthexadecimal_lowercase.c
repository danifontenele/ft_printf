/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal_lowercase.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 21:08:54 by calvares          #+#    #+#             */
/*   Updated: 2025/11/11 23:08:38 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexadecimal_lowercase(unsigned int nb)
{
	int		re;
	char	*base;

	re = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
		re += ft_puthexadecimal_lowercase(nb / 16);
	re += ft_putchar(base[nb % 16]);
	return (re);
}

/* int main(void)
{
	ft_puthexadecimal_lowercase(123); ft_putchar('\n');
	ft_puthexadecimal_lowercase(1234); ft_putchar('\n');
	ft_puthexadecimal_lowercase(127); ft_putchar('\n');
	ft_puthexadecimal_lowercase(255); ft_putchar('\n');
} */