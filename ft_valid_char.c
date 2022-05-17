/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 05:37:34 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/17 05:56:08 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_valid_char(char c)
{
	int		i;
	char	*valid_char;

	i = 0;
	valid_char = "cspdiuxX%";
	while (valid_char[i])
	{
		if (valid_char[i] == c)
			return (1);
		i++;
	}
	return (0);
}
