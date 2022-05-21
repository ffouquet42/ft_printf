/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 05:32:39 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/21 03:50:41 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	// Test without percentage
	ft_printf("\n=== Test without percentage ===\n\n");

	ft_printf("Hello\n");

	ft_printf("\n-------------------------------\n");

	// Test %c
	ft_printf("\n=== Test %c ===\n\n");

	ft_printf("Hello %c\n", 'a');
	ft_printf("Hello %c%c%c\n", 'a', 'b', 'c');
	
	ft_printf("\n-------------------------------\n");
	
	// Test %s
	ft_printf("\n=== Test %%s ===\n\n");

	ft_printf("Hello %s\n", "soum");
	
	ft_printf("\n-------------------------------\n");

	// Test %d and %i
	ft_printf("\n=== Test %%d and %%i ===\n\n");

	ft_printf("Hello %i world %d\n", -123, 789);
	printf("Hello %i world %d\n", -123, 789);
	
	ft_printf("\n-------------------------------\n");

	// Test %u - unsigned double ?
	ft_printf("\n=== Test %%u ===\n\n");

	ft_printf("Hello %u world %u\n", 123, 789);
	printf("Hello %u world %u\n", 123, 789);
	ft_printf("Hello %u world %u\n", -123, 789);
	printf("Hello %u world %u\n", -123, 789);
	
	ft_printf("\n-------------------------------\n");
	
	// Test %x and %X
	ft_printf("\n=== Test %%x and %%X ===\n\n");
	
	ft_printf("Hello %x world %X\n", 123456, -9807);
	printf("Hello %x world %X\n", 123456, -9807);
	
	ft_printf("\n-------------------------------\n");
	
	// Test %%
	ft_printf("\n=== Test %%%% ===\n\n");

	ft_printf("Hello %%\n");
	
	ft_printf("\n-------------------------------\n");

	// Test unvalid char
	ft_printf("\n=== Test unvalid char ===\n\n");

	ft_printf("Hello %y\n");
	printf("Hello %y\n");
	
	ft_printf("\n-------------------------------\n");
	
	int		test_p = 12;
	void	*second_p = &test_p;
	int 	ret_reel_function = 0;
	int 	ret_my_function = 0;

	//simple string
	printf("--------------   simple string, no argument   --------------\n");
	ret_my_function = ft_printf("ft_printf    : Hello World!\n");
	ret_reel_function = printf("real printf  : Hello World!\n");
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//char
	printf("--------------   char : c   --------------\n");
	ret_my_function = ft_printf("ft_printf    : %c\n", 'c');
	ret_reel_function = printf("real printf  : %c\n", 'c');
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//string
	printf("--------------   string : s   --------------\n");
	ret_my_function = ft_printf("ft_printf    : %s\n", "Hello World!");
	ret_reel_function = printf("real printf  : %s\n", "Hello World!");
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//pointer
	printf("--------------   pointer : p   --------------\n");
	ret_my_function = ft_printf("ft_printf    : [%p,%p,%p]\n", &test_p, second_p, &second_p);
	ret_reel_function = printf("real printf  : [%p,%p,%p]\n", &test_p, second_p, &second_p);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//double
	printf("--------------   double : d   --------------\n");
	ret_my_function = ft_printf("ft_printf    : [%d,%d,%d,%d]\n", 10 , -10, 10, 0);
	ret_reel_function = printf("real printf  : [%d,%d,%d,%d]\n", 10 , -10, 10, 0);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//int
	printf("--------------   int : i   --------------\n");
	ret_my_function = ft_printf("ft_printf    : [%i,%i,%i]\n", (int)-2147483648, (int)2147483647, 0);
	ret_reel_function = printf("real printf  : [%i,%i,%i]\n", (int)-2147483648, (int)2147483647, 0);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//unsigned double
	printf("--------------   unsigned double : u   --------------\n");
	ret_my_function = ft_printf("ft_printf    : [%u,%u]\n", (unsigned int)10, (unsigned int)0);
	ret_reel_function = printf("real printf  : [%u,%u]\n", (unsigned int)10, (unsigned int)0);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//int convert to hexa in lowercase
	printf("--------------   hexa lowercase : x   --------------\n");
	ret_my_function = ft_printf("ft_printf    : [%x,%x,%x,%x,%x]\n", (int)-2147483648, (int)2147483647, 0, -42, 42);
	ret_reel_function = printf("real printf  : [%x,%x,%x,%x,%x]\n", (int)-2147483648, (int)2147483647, 0, -42, 42);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//int convert to hexa in uppercase
	printf("--------------   hexa uppercase : X   --------------\n");
	ret_my_function = ft_printf("ft_printf    : [%X,%X,%X,%X,%X]\n", (int)-2147483648, (int)2147483647, 0, -42, 42);
	ret_reel_function = printf("real printf  : [%X,%X,%X,%X,%X]\n", (int)-2147483648, (int)2147483647, 0, -42, 42);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//percent
	printf("--------------   percent : %%   --------------\n");
	ret_my_function = ft_printf("ft_printf    : %%\n");
	ret_reel_function = printf("real printf  : %%\n");
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	ft_printf("=========================================\n");
	
	printf("--------------   %%s : NULL   --------------\n");
	ret_my_function = ft_printf("NULL %s NULL\n", NULL);
	ret_reel_function = printf("NULL %s NULL\n", NULL);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	printf("--------------   %%u : neg   --------------\n");
	ret_my_function = ft_printf(" %u \n", -10);
	ret_reel_function = printf(" %u \n", -10);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	printf("--------------   %%p - LONG MIN MAX  --------------\n");
	ret_my_function = ft_printf("ft_printf    : [%p / %p]\n", LONG_MIN, LONG_MAX);
	ret_reel_function = printf("real printf  : [%p / %p]\n", LONG_MIN, LONG_MAX);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	printf("--------------   %%p - 0  --------------\n");
	ret_my_function = ft_printf("ft_printf    : [%p / %p]\n", 0, 0);
	ret_reel_function = printf("real printf  : [%p / %p]\n", 0, 0);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//--------------------------------------------------mix
	printf("--------------   mix : %%   --------------\n");
	ret_my_function = ft_printf("ft_printf    : %c%%%s", 'c', "julien");
	ret_reel_function = printf("real printf  :  %c%%%s", 'c', "julien");
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);
}
