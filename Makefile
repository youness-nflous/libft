CC = gcc

CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = #file name.c

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
