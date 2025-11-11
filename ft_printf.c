/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:50:01 by calvares          #+#    #+#             */
/*   Updated: 2025/11/11 23:43:00 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_specifier(const char *format, va_list *args, int *i)
{
	int	re;

	re = 0;
	if (format[*i + 1] == 'c')
		re += ft_putchar(va_arg(*args, int));
	else if (format[*i + 1] == 's')
		re += ft_putstr(va_arg(*args, char *));
	else if (format[*i + 1] == 'p')
		re += ft_putaddress(va_arg(*args, unsigned long));
	else if (format[*i + 1] == 'd' || format[*i + 1] == 'i')
		re += ft_putnbr(va_arg(*args, int));
	else if (format[*i + 1] == 'u')
		re += ft_putunbr(va_arg(*args, unsigned int));
	else if (format[*i + 1] == 'x')
		re += ft_puthexadecimal_lowercase(va_arg(*args, unsigned int));
	else if (format[*i + 1] == 'X')
		re += ft_puthexadecimal_uppercase(va_arg(*args, unsigned int));
	else if (format[*i + 1] == '%')
		re += write (1, "%", 1);
	else
	{
		re += write(1, "%", 1);
	}
	*i += 2;
	return (re);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		re;

	re = 0;
	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			re += format_specifier(format, &args, &i);
		else
		{
			re += write (1, &format[i], 1);
			i++;
		}
	}
	va_end(args);
	return (re);
}

/* int main(void)
{
	int x = 42;
	int *ptr = &x;
	
	ft_printf("Caso 1) format 's' e 'd':\n");
	ft_printf("	Me chamo %s\n	Tenho %d anos.\n", "Carlos", 24);
	ft_printf("Caso 2) format 'i', 'x' e 'X':\n");
	ft_printf("	%i em hexadecimal maiusculo: %X\n", 42, 42);
	ft_printf("	%i em hexadecimal minusculo: %x\n", 42, 42);
	ft_printf("Caso 3) format como 'p':\n");
	ft_printf("	O endereco de ptr e: %p\n", ptr);
	ft_printf("	E um ponteiro NULL: %p\n", NULL);
	ft_printf("Caso 4: format como 'u':\n");
	ft_printf("	O numero %i unsigned seria: %u\n", -42, -42);
	ft_printf("Caso 5) format desconhecido:\n");
	ft_printf("	O formato %z e desconhecido\n");
	ft_printf("Caso 6) format como '%':\n");
	ft_printf("	%%\n");
	ft_printf("Caso 7) format como 'c':\n");
	ft_printf("	printando um caractere: %c", 'd');

	printf("\nEsperado:\n");
	printf("1) Me chamo %s\nTenho %d anos de idade\n", "Carlos", 24);
	printf("2) %i em hexadecimal maiusculo: %X\n", 42, 42);
	printf("2.2) %i em hexadecimal minusculo: %x\n", 42, 42);
	printf("3) O endereco de ptr e: %p\n", ptr);
	printf("3.2) E um ponteiro NULL: %p\n", NULL);
	printf("4) O numero %i unsigned seria: %u\n", -42, -42);
	printf("5) O formato %z e desconhecido\n");
	printf("6) %%\n");
	printf("7) printando um caractere: %c\n", 'd');
	printf("\nRetorno ft_: %i\n", ft_printf("essa e uma string teste\n"));
	ft_printf("Retorno original: %i\n", printf("essa e uma string teste\n"));
} */