# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/01 12:02:16 by abkasmi           #+#    #+#              #
#    Updated: 2022/09/01 12:02:43 by abkasmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp\
	zombieHorde.cpp\
	Zombie.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = zombie

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

%.o:	%.cpp
	c++ $(CPPFLAGS) -c $(SRCS)

$(NAME) : $(OBJS)
	c++ $(OBJS) -o $(NAME)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re