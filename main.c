/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 05:32:39 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/17 11:53:22 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// delete

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// Test without percentage
	ft_printf("Hello\n");

	// Test %c
	ft_printf("Hello %c\n", 'a');
	ft_printf("Hello %c%c%c\n", 'a', 'b', 'c');
	
	// Test %s
	ft_printf("Hello %s\n", "soum");

	// Test %d and %i
	ft_printf("Hello %i world %d\n", -123, 789);

	// Test %u
	ft_printf("Hello %u world %u\n", 123, 789);
	
	// Test %x and %X
	ft_printf("Hello %x world %X\n", 123456, -9807);
	printf("Hello %x world %X\n", 123456, -9807); // Neg ???
	
	// Test %%
	ft_printf("Hello %%\n");

	// Test unvalid char
	ft_printf("Hello %y\n");
	printf("Hello %y\n");
	
	return (0);
}
