##
## EPITECH PROJECT, 2023
## my_paint
## File description:
## Makefile
##

SRC			=	src/main.c\
				src/initialize/init_window.c\
				src/initialize/init_global.c\
				src/initialize/init_sprite.c\
				src/display/window_loop.c\
				src/display/display_pixels.c\
				src/list_actions/alterate/push_back.c\
				src/list_actions/alterate/push_front.c\
				src/list_actions/alterate/pop_front.c\
				src/list_actions/alterate/pop_back.c\
				src/list_actions/alterate/erase.c\
				src/list_actions/utils/list_length.c\
				src/list_actions/utils/print_list.c\
				src/utils/create_color.c\

INCLUDE		=	-I ./include\
				-I ./include/structures\
				-I ./include/structures/pixels\
				-I ./include/prototypes\

NAME		=	gouache

SFML_FLAGS	=	-lcsfml-graphics -lcsfml-audio

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) $(INCLUDE) $(CFLAGS) $(SFML_FLAGS)

re: fclean all

fclean:
	rm $(NAME)