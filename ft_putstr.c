/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 21:09:04 by calvares          #+#    #+#             */
/*   Updated: 2025/11/09 21:59:00 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

/* int	main(void)
{
	char str[] = "1) This is the first string to print\n";
	char *str2 = "2) This is the second string to print\n";
	
	ft_putstr(str);
	ft_putstr(str2);
	ft_putstr("3) This is the third string to print\n");
} */