##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC = main.c\
		functions.c\
		complete.c\
		handling_error.c

OBJ = $(SRC:.c=.o)

NAME = bsq

LIB = ./lib/my

all: $(NAME)

$(NAME): $(OBJ)
		@make -s re -C $(LIB)
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
