SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

CPP = clang++

FLAGS = -Wall -Wextra -Werror

NAME = megaphone

%.o : %.cpp
	$(CPP) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
