# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/18 18:13:38 by fel-hita          #+#    #+#              #
#    Updated: 2018/10/07 20:36:33 by fel-hita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Werror -Wextra
SRC = srcs/*.c
HEADER = includes/*.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I=$(HEADER)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
