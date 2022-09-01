# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 15:29:36 by abkasmi           #+#    #+#              #
#    Updated: 2022/09/01 11:52:50 by abkasmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp\
	newZombie.cpp\
	randomChump.cpp\
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