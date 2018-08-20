# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antonga <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/12 10:26:00 by antonga           #+#    #+#              #
#    Updated: 2018/08/19 21:41:28 by antonga          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = antonga.filler
CC = gcc -o
FLAGS = -Wall -Wextra -Werror
INC = -I ./includes/
LIB = ./libft/
SRC = ./srcs/*.c

RM = rm -rf

$(NAME):
	@make -C $(LIB)
	@$(CC) $(NAME) $(FLAGS) $(SRC) $(INC) -L libft/ -lft
	@echo "-- Player Compiled Successfully --"

all: $(NAME)

clean:
	@make clean -C $(LIB)

fclean:
	@make fclean -C $(LIB)
	@$(RM) $(NAME)
	@echo "-- Player Cleaned --"


re: fclean all
