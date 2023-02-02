/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main
*/

#include "my.h"

int main(void)
{
    global_t *global = init_global();

    while (sfRenderWindow_isOpen(global->window->window)) {
        while (sfRenderWindow_pollEvent(global->window->window, &global->window->event))
            if (global->window->event.type == sfEvtClosed)
                sfRenderWindow_close(global->window->window);
    }
    return 0;
}