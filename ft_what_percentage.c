/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_what_percentage.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 05:49:33 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/17 11:50:38 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_what_percentage(char c, va_list ap)
{
	if (c == 'c')
		ft_putchar((char)va_arg(ap, int));
	else if (c == 's')
		ft_putstr(va_arg(ap, char *));
	//else if (c == 'p')
	//	ft_percentage_p(ap);
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
