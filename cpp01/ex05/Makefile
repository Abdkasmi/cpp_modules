# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/02 11:16:03 by abkasmi           #+#    #+#              #
#    Updated: 2022/09/02 11:16:03 by abkasmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp\
	Harl.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = harl

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