# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xbeheydt <xbeheydt@42lausanne.ch>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 12:04:57 by xbeheydt          #+#    #+#              #
#    Updated: 2022/04/06 12:55:08 by xbeheydt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean fclean re all tests test.out

NAME		= test.out
SRCS		= main.cpp Sed.cpp

CC			= c++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

RM			= rm -rf

define OK
	\n\033[32m[OK]\033[0m\n\n
endef
export OK
PRINTOK 	:= printf $$OK
define NO
	\n\033[31m[KO]\033[0m\n\n
endef
export KO
PRINTKO 	:= printf $$KO

all: $(NAME)

$(NAME):
	$(CC) ${CFLAGS} ${SRCS} -o $@

clean:
	$(RM) ${NAME}
	$(RM) *.replace

fclean: clean

tests: all
	./$(NAME) test.log withdrawals retrait
