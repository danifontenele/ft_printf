/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 21:09:07 by calvares          #+#    #+#             */
/*   Updated: 2025/11/09 22:07:55 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nb)
{
	unsigned int	re;

	re = 0;
	if (nb > 9)
	{
		re += ft_putunbr(nb / 10);
		re += ft_putunbr(nb % 10);
	}
	else
		re += ft_putchar (nb + '0');
	return (re);
}

/* int	main(void)
{
	ft_putunbr(42); ft_putchar('\n');
	ft_putunbr(0); ft_putchar('\n');
	ft_putunbr(-2147483648); ft_putchar('\n');
	ft_putunbr(4294967295); ft_putchar('\n');
} */