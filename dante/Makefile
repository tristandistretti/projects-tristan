##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

MAKEFILE1 = ./generator

MAKEFILE2 = ./solver

make:
		@make -s -C $(MAKEFILE1)
		@make -s -C $(MAKEFILE2)
		@make clean

clean:
		@make clean -C $(MAKEFILE2)
		@make clean -C $(MAKEFILE1)

fclean:
		@make fclean -C $(MAKEFILE2)
		@make fclean -C $(MAKEFILE1)

re: fclean make

.PHONY: clean fclean re
