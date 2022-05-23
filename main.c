/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 05:32:39 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/23 09:08:00 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		ptr = 42;
	void	*second_ptr = &ptr;
	int 	my_function_return = 0;
	int 	real_function_return = 0;
	
	// tests without %
	printf("\n----------   without %%   ----------\n\n");
	
	my_function_return = ft_printf("my ft_printf : Hello\n");
	real_function_return = printf("real printf  : Hello\n");
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);
		
	my_function_return = ft_printf("my ft_printf : Hello World!\n");
	real_function_return = printf("real printf  : Hello World!\n");
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	// tests %c
	printf("\n----------   %%c   ----------\n\n");

	my_function_return = ft_printf("ft_printf    : %c\n", 'c');
	real_function_return = printf("real printf  : %c\n", 'c');
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	my_function_return = ft_printf("ft_printf    : %c\n", 'A');
	real_function_return = printf("real printf  : %c\n", 'A');
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	my_function_return = ft_printf("ft_printf    : %c%c%c\n", 'a', 'b', 'c');
	real_function_return = printf("ft_printf    : %c%c%c\n", 'a', 'b', 'c');
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	// tests %s
	printf("\n----------   %%s   ----------\n\n");

	my_function_return = ft_printf("ft_printf    : %s\n", "Hello World!");
	real_function_return = printf("ft_printf    : %s\n", "Hello World!");
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	my_function_return = ft_printf("NULL %s NULL\n", NULL);
	real_function_return = printf("NULL %s NULL\n", NULL);
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	my_function_return = ft_printf("ft_printf    : %s\n", "AbCdEf");
	real_function_return = printf("ft_printf    : %s\n", "AbCdEf");
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	// tests %p
	printf("\n----------   %%p   ----------\n\n");

	my_function_return = ft_printf("ft_printf    : [%p, %p, %p]\n", &ptr, second_ptr, &second_ptr);
	real_function_return = printf("ft_printf    : [%p, %p, %p]\n", &ptr, second_ptr, &second_ptr);
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	my_function_return = ft_printf("ft_printf    : [%p / %p]\n", LONG_MIN, LONG_MAX);
	real_function_return = printf("ft_printf    : [%p / %p]\n", LONG_MIN, LONG_MAX);
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	my_function_return = ft_printf("ft_printf    : [%p / %p]\n", 0, 0);
	real_function_return = printf("ft_printf    : [%p / %p]\n", 0, 0);
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	// tests %d
	printf("\n----------   %%d   ----------\n\n");

	my_function_return = ft_printf("ft_printf    : [%d, %d, %d, %d]\n", 10 , -10, 42, 0);
	real_function_return = printf("ft_printf    : [%d, %d, %d, %d]\n", 10 , -10, 42, 0);
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	// tests %i
	printf("\n----------   %%i   ----------\n\n");
	
	my_function_return = ft_printf("ft_printf    : [%i, %i, %i]\n", (int)-2147483648, (int)2147483647, 0);
	real_function_return = printf("ft_printf    : [%i, %i, %i]\n", (int)-2147483648, (int)2147483647, 0);
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	// tests %u
	printf("\n----------   %%u   ----------\n\n");

	my_function_return = ft_printf("ft_printf    : [%u, %u]\n", (unsigned int)10, (unsigned int)0);
	real_function_return = printf("ft_printf    : [%u, %u]\n", (unsigned int)10, (unsigned int)0);
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	my_function_return = ft_printf("Hello %u world %u\n", 123, 789);
	real_function_return = printf("Hello %u world %u\n", 123, 789);
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);
	
	my_function_return = ft_printf("Hello %u world %u\n", -123, 789);
	real_function_return = printf("Hello %u world %u\n", -123, 789);
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);
		
	my_function_return = ft_printf(" %u \n", -10);
	real_function_return = printf(" %u \n", -10);
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	// tests %x
	printf("\n----------   %%x   ----------\n\n");

	my_function_return = ft_printf("ft_printf    : [%x, %x, %x, %x, %x]\n", (int)-2147483648, (int)2147483647, 0, -42, 42);
	real_function_return = printf("ft_printf    : [%x, %x, %x, %x, %x]\n", (int)-2147483648, (int)2147483647, 0, -42, 42);
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	// tests %X
	printf("\n----------   %%X   ----------\n\n");

	my_function_return = ft_printf("ft_printf    : [%X, %X, %X, %X, %X]\n", (int)-2147483648, (int)2147483647, 0, -42, 42);
	real_function_return = printf("ft_printf    : [%X, %X, %X, %X, %X]\n", (int)-2147483648, (int)2147483647, 0, -42, 42);
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	// tests %%
	printf("\n----------   %%%%   ----------\n\n");

	my_function_return = ft_printf("ft_printf    : %%\n");
	real_function_return = printf("ft_printf    : %%\n");
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	my_function_return = ft_printf("Hello %%\n");
	real_function_return = printf("Hello %%\n");
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	// tests % mixed
	printf("\n----------   %% mixed   ----------\n\n");

	my_function_return = ft_printf("Hello %i world %d\n", -123, 789);
	real_function_return = printf("Hello %i world %d\n", -123, 789);
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	my_function_return = ft_printf("Hello %x world %X\n", 123456, -9807);
	real_function_return = printf("Hello %x world %X\n", 123456, -9807);
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	my_function_return = ft_printf("ft_printf    : %c%%%s\n", 'c', "hello");
	real_function_return = printf("ft_printf    : %c%%%s\n", 'c', "hello");
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	my_function_return = ft_printf("ft_printf    : [%%%%%%c%%%%%%]\n");
	real_function_return = printf("ft_printf    : [%%%%%%c%%%%%%]\n");
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);

	// tests unvalid %
	printf("\n----------   unvalid %%   ----------\n\n");

	my_function_return = ft_printf("Hello %y\n");
	real_function_return = printf("Hello %y\n");
	if (real_function_return == my_function_return)
		printf("Return is OK : [%d,%d]\n\n", my_function_return, real_function_return);
	else
		printf("Return is not OK : [%d,%d]\n\n", my_function_return, real_function_return);
}
