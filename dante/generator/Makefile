##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC = $(shell echo src/*.c lib/my/*.c)

OBJ = $(SRC:.c=.o)

NAME = generator

CFLAGS = -g

all: $(NAME)

$(NAME): $(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS) -lncurses

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
