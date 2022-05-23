/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_sum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 07:08:02 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/23 06:41:54 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_add_sum(char c, va_list ap)
{
	unsigned long long int	ptr;

	ptr = 0;
	if (c == 'c')
	{
		return (ft_add_sum_c(va_arg(ap, int)));
	}
	else if (c == '%')
		return (1);
	else if (c == 's')
		return (ft_strlen(va_arg(ap, char *)));
	else if (c == 'p')
	{
		ptr = va_arg(ap, unsigned long long int);
		if (!ptr)
			return (5);
		return (ft_size_ptr(ptr) + 2);
	}
	else if (c == 'd' || c == 'i')
		return (ft_nbrlen(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_nbrlen_unsigned(va_arg(ap, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_size_hexa(va_arg(ap, unsigned int)));
	return (0);
}
