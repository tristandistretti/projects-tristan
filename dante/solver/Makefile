##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC = $(shell echo src/*.c)

OBJ = $(SRC:.c=.o)

NAME = solver

LIB = ./lib/my

all: $(NAME)

$(NAME): $(OBJ)
		@make -s -C $(LIB)
		@gcc -o $(NAME) $(OBJ) -L$(LIB) -lmy -g
		@make clean

clean:
		@make clean -C $(LIB)
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)
		@make fclean -C $(LIB)

re: fclean all

.PHONY: all clean fclean re
