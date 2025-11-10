/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:50:01 by calvares          #+#    #+#             */
/*   Updated: 2025/11/09 23:38:23 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* 
1) Check if there's just format in the functions -> ft_putstr
2) else if there is a format specifier(%):
	- d: format integer in base 10 signed(putnbr).
	- i: prints integer in base 10(putnbr).
	- s: format as null-terminated string(putstr).
	- c: format as a character(putchar)
	- x: format as hexadecimal nbr, lowcase(ft_puthexadecimal_lowercase)
	- X: format as hexadecimal nbr, upcase(ft_puthexadecimal_uppercase)
	- p: the void *pointer argument has to be printed in hexadecimal format.
	- %: prints a percent sign.
3) call the best function according to the format specifier found.
*/
int	ft_printf(const char *format, ...)
{

}