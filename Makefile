##
## EPITECH PROJECT, 2019
## Makefile for eval_expr
## File description:
## Root Makefile
##

SRC		=	main.c					\
			menu/create_object.c	\
			menu/create_button.c	\
			menu/events.c			\
			menu/menu.c				\
			menu/button_menu.c		\
			menu/button_click.c
$(eval SRC = $(addprefix src/, $(SRC)))

SRC_TEST	=	tests/eval_expr_tests.c	\

NAME	=	my_rpg

RUN_TESTS	=	./test_crite

Flag	=	-Wall -Wextra

CC	=	gcc

all:	run

run:
	$(CC) -o $(NAME) $(SRC) -l csfml-graphics -l csfml-window -l csfml-audio -I./include $(Flag)
	rm -f $(OBJ)

debug:
	$(CC) -o $(NAME) $(SRC) -l csfml-graphics -l csfml-window -l csfml-audio -I./include -g3
clean:
	find -name "*.o" -delete

fclean:
	rm -f test_crite
	rm -f $(NAME)
	make fclean -C lib/my
	make fclean -C lib/Csfml

re:     fclean, all

.PHONY: all, clean, fclean, re, tests_run, run
