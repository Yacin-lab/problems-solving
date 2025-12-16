NAME = quiz

SRC = src/main.c \
      src/show_menu.c \
      src/start_game.c \
      src/ask_question.c \
      src/read_line.c \
      src/ft_putchar.c \
      src/ft_putstr.c \
      src/ft_putnbr.c \
      src/ft_strlen.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I includes

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

