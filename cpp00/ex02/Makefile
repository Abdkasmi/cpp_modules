# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 10:02:38 by abkasmi           #+#    #+#              #
#    Updated: 2022/10/05 11:13:58 by abkasmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Account.cpp\
	tests.cpp\

OBJS = $(SRCS:.cpp=.o)

NAME = dreamjob

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

%.o : %.cpp
		c++ $(CPPFLAGS) -c $(SRCS)

$(NAME) : $(OBJS)
		c++ $(OBJS) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
