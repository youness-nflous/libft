CC = gcc

CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_atoi.c

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
