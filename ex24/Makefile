# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 15:09:54 by ngontjar          #+#    #+#              #
#    Updated: 2019/10/15 20:09:17 by ngontjar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
SRO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
INC = ./includes

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(INC)
	ar -rv $(NAME) $(SRO)

clean:
	rm -f $(SRO)

fclean: clean
	rm -f $(NAME)

re: fclean all