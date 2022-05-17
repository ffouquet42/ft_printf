/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 00:26:31 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/17 08:41:52 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int	i;
	int	sum;
	
	i = 0;
	sum = 0;
	va_list ap;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_valid_char(str[i + 1]))
		{
			i++;
			ft_what_percentage(str[i], ap);
		}
		else
		{
			ft_putchar(str[i]);
			sum++;
		}
		i++;
	}
	va_end(ap);
	return (sum);
}
