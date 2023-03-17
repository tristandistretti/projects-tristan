##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

MAKEFILE1 = ./my_sokoban

make:
		@make -s -C $(MAKEFILE1)
		@make clean

clean:
		@make clean -C $(MAKEFILE1)

fclean:
		@make fclean -C $(MAKEFILE1)

re: fclean make

.PHONY: clean fclean re
