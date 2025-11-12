/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:34:41 by calvares          #+#    #+#             */
/*   Updated: 2025/11/11 23:56:33 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

//Functions used:
int	ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putunbr(unsigned int nb);
int	ft_puthexadecimal_lowercase(unsigned int nb);
int	ft_puthexadecimal_uppercase(unsigned int nb);
int	ft_putaddress(unsigned long nb);

#endif