CXX = c++

CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

NAME = Myprogram 


all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) -o $@ $^ -std=c++98

%.o: %.c
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all