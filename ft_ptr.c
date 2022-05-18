/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:43:02 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/18 10:53:45 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptr(unsigned long long int n)
{
	long	nb;
	char	*base;

	base = "0123456789abcdef";
	nb = n;
	if (nb >= 16)
	{
		ft_ptr(nb / 16);
		n = n % 16;
	}
	write(1, &base[n], 1);
}
