# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antonga <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/14 05:32:04 by antonga           #+#    #+#              #
#    Updated: 2018/08/17 13:59:00 by antonga          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./*.c

HEADER = libft.h

OBJ = $(SRCS:.c=.o)

FLAG = -Wall -Werror -Wextra

$(NAME):
	gcc $(FLAG) -c $(SRCS) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

.PHONY: all
all: $(NAME)

.PHONY:	clean
clean:
	rm -f $(OBJ)

.PHONY:	fclean
fclean: clean
	rm -f $(NAME)

.PHONY:	re
re: fclean all
