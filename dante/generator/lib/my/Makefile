##
## EPITECH PROJECT, 2021
## B-CPE-100-STG-1-1-cpoolday10-thomas.decaudain
## File description:
## Makefile for libmy
##

SRC = $(shell echo *.c)

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re