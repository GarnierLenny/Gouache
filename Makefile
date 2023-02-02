##
## EPITECH PROJECT, 2023
## my_paint
## File description:
## Makefile
##

SRC			=	src/main.c\
				src/initialize/init_window.c\
				src/initialize/init_global.c\
				src/display/window_loop.c\

INCLUDE		=	-I ./include

NAME		=	gouache

SFML_FLAGS	=	-lcsfml-graphics -lcsfml-audio

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) $(INCLUDE) $(CFLAGS) $(SFML_FLAGS)

re: fclean all

fclean:
	rm $(NAME)