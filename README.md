# ft_printf

*Version: 9*

## Grade - 100/100

Mandatory Part : 100/100  

## Description

This project consists of recoding printf with the possibility of reusing it in future projects. This project is mainly about variable length arguments. It also introduces the variadic functions.

## What's in this project

It was realized without the bonuses. All the files are normed following the standard of 42.  

This project contains the necessary ft_printf code to make the following conversions work:

* %c Prints a single character.
* %s Prints a string (as defined by the common C convention).
* %p The void * pointer argument has to be printed in hexadecimal format.
* %d Prints a decimal (base 10) number.
* %i Prints an integer in base 10.
* %u Prints an unsigned decimal (base 10) number.
* %x Prints a number in hexadecimal (base 16) lowercase format.
* %X Prints a number in hexadecimal (base 16) uppercase format.
* %% Prints a percent sign.

## How to use it

For compile this project use the Makefile with one of the following rules.

`make` : Compile all the mandatory part in a `libftprintf.a`   
`make clean` : Delete the `*.o`  
`make fclean` : Delete the `*.o` and `libftprintf.a`  
`make re` : Run `make fclean` then `make`  

## Testing

This project respects the norm of 42 and has been tested with the norminette.  

This project contains a custom `main.c` containing several tests for each conversion.

run `gcc *.c && ./a.out` to run the test.

don't worry about the warnings, they're because of include limits.h and because it tests for things that don't exist like %y.

This project has also been tested with two testers from github. All the tests carried out return OK.  

* [printfTester](https://github.com/Tripouille/printfTester) from Tripouille  
* [ft_printf_tester](https://github.com/paulo-santana/ft_printf_tester) from paulo-santana  

## Credit

Project made by [ffouquet42](https://github.com/ffouquet42)