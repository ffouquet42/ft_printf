/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_sum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 07:08:02 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/18 11:06:11 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_add_sum(char c, va_list ap)
{
	if (c == 'c' || c == '%')
		return (1);
	else if (c == 's')
		return (ft_strlen(va_arg(ap, char *)));
	else if (c == 'p')
		return (ft_size_ptr(va_arg(ap, unsigned long long int)) + 2);
	else if (c == 'd' || c == 'i' || c == 'u')
		return (ft_nbrlen(va_arg(ap, int)));
	else if (c == 'x' || c == 'X')
		return (ft_size_hexa(va_arg(ap, unsigned int)));
}
