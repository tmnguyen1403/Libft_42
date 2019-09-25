NAME = libft.a
SRCS = srcs/ft_*.c
OBJECTS = ft_*.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

$(OBJECTS):
	gcc $(FLAGS) -c $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJECTS)

re: fclean all
