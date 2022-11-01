SRCS = main.cpp\
	Bureaucrat.cpp\
	Form.cpp
	
OBJS = $(SRCS:.cpp=.o)

NAME = form

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