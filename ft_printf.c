/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 00:26:31 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/18 08:04:48 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		sum;
	va_list	ap;
	va_list cpy;

	i = 0;
	sum = 0;
	va_start(ap, str);
	va_copy(cpy, ap);
	while (str[i])
	{
		if (str[i] == '%' && ft_valid_char(str[i + 1]))
		{
			i++;
			ft_what_percentage(str[i], ap);
			sum += ft_add_sum(str[i], cpy);
		}
		else
		{
			ft_putchar(str[i]);
			sum++;
		}
		i++;
	}
	va_end(ap);
	va_end(cpy);
	return (sum);
}
