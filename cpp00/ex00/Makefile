# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 15:14:47 by abkasmi           #+#    #+#              #
#    Updated: 2022/07/28 15:14:47 by abkasmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = megaphone

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

%.o:	%.cpp
			c++ ${CPPFLAGS} -c ${SRCS} -o ${OBJS}

$(NAME) : $(OBJS)
			c++ $(OBJS) -o $(NAME)

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY: all clean fclean re