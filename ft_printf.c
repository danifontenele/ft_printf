/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:50:01 by calvares          #+#    #+#             */
/*   Updated: 2025/11/21 00:04:50 by calvares         ###   ########.fr       */
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
	ft_printf("	ft_printf: 	Me chamo %s Tenho %d anos.\n", "Carlos", 24);
	printf("	printf: 	Me chamo %s Tenho %d anos.\n", "Carlos", 24);
	
	ft_printf("\nCaso 2) format 'i', 'x' e 'X':\n");
	ft_printf("	ft_printf: 	%i em hexadecimal maiusculo: %X\n", 42, 42);
	printf("	printf: 	%i em hexadecimal maiusculo: %X\n", 42, 42);
	ft_printf("	ft_printf: 	%i em hexadecimal minusculo: %x\n", 42, 42);
	printf("	printf: 	%i em hexadecimal minusculo: %x\n", 42, 42);
	
	ft_printf("\nCaso 3) format como 'p':\n");
	ft_printf("	ft_printf: 	O endereco de ptr e: %p\n", ptr);
	printf("	printf: 	O endereco de ptr e: %p\n", ptr);
	ft_printf("	ft_printf: 	E um ponteiro NULL: %p\n", NULL);
	printf("	printf: 	E um ponteiro NULL: %p\n", NULL);
	
	ft_printf("\nCaso 4: format como 'u':\n");
	ft_printf("	ft_printf: 	O numero %i unsigned seria: %u\n", -42, -42);
	printf("	printf: 	O numero %i unsigned seria: %u\n", -42, -42);
	
	ft_printf("\nCaso 5) format como '%%':\n");
	ft_printf("	ft_printf: 	%%\n");
	printf("	printf: 	%%\n");
	
	ft_printf("\nCaso 6) format como 'c':\n");
	ft_printf("	ft_printf:	printando um caractere: %c\n", 'd');
	printf("	printf:		printando um caractere: %c\n", 'd');
	
	ft_printf("\nCaso 7) Retorno:\n");
	int r;
	r = printf("	essa e uma string teste\n");
	printf("	Retorno printf: 	%i\n", r);
	r = ft_printf("	essa e uma string teste\n");
	ft_printf("	Retorno ft_printf: 	%i\n", r);
} */