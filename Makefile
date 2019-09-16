NAME = libft.a
SRCS = srcs/memset.c srcs/main.c 
OBJECTS = memset.o main.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	gcc $(FLAGS) $(OBJECTS) -o test

$(OBJECTS):
	gcc $(FLAGS) -c $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJECTS)

re: fclean all
