SRCS =	Bureaucrat.cpp \
		Form.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

CPP = clang++

FLAGS = -g -Wall -Wextra -Werror -pedantic -std=c++98

NAME = bureau

%.o : %.cpp
	$(CPP) $(FLAGS) -c $< -o $(<:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	rm *_shrubbery

fclean: clean
	rm -rf $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)

.PHONY: fclean clean all re run
