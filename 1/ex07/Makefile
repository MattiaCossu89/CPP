SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

CPP = clang++

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

NAME = megaphone

%.o : %.cpp
	$(CPP) $(FLAGS) -c $< -o $(<:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean clean all re
