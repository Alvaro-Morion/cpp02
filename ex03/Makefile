# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorion- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/20 09:14:58 by amorion-          #+#    #+#              #
#    Updated: 2022/04/08 09:51:48 by amorion-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Fixed.cpp Point.cpp main.cpp bsp.cpp

OBJS = $(SRCS:.cpp=.o)

CC = clang++

FLAGS = -std=c++98 -Wall -Werror -Wextra

NAME = a.out

all: $(NAME)

.cpp.o:
	@$(CC) $(FLAGS) -c $< -o ${<:.cpp=.o}

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "Binary generated"

clean: 
	@rm -rf $(OBJS)
	@echo "Object files deleted"

fclean: clean
	@rm -rf $(NAME)
	@echo "Binary file deleted"

re: fclean all

.PHONY: re fclean clean all
