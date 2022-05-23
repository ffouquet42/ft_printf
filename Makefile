# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 23:03:46 by fllanet           #+#    #+#              #
#    Updated: 2022/05/23 06:50:11 by fllanet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_add_sum.c ft_dec_to_hex.c ft_nbrlen.c ft_printf.c \
				ft_ptr.c ft_putchar.c ft_putnbr_unsigned.c ft_putnbr.c \
				ft_putstr.c ft_size_hexa.c ft_size_ptr.c ft_strlen.c \
				ft_valid_char.c ft_what_percentage.c ft_nbrlen_unsigned.c \
				ft_add_sum_c.c \

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror

NAME		=	libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re