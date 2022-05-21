/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_what_percentage.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 05:49:33 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/21 03:02:12 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_what_percentage(char c, va_list ap)
{
	unsigned long long int	ptr;

	ptr = 0;
	if (c == 'c')
		ft_putchar((char)va_arg(ap, int));
	else if (c == 's')
		ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
	{
		ptr = va_arg(ap, unsigned long long int);
		if (ptr)
			write(1, "0x", 2);
		ft_ptr(ptr);
	}
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(ap, int));
	else if (c == 'x')
		ft_dec_to_hex(va_arg(ap, int), 0);
	else if (c == 'X')
		ft_dec_to_hex(va_arg(ap, int), 1);
	else if (c == '%')
		ft_putchar('%');
}
