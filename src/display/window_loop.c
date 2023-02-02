/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** window_loop
*/

#include "global.h"

void window_loop(global_t *global)
{
    while (sfRenderWindow_isOpen(global->window->window)) {
        while (sfRenderWindow_pollEvent(global->window->window, &global->window->event))
            if (global->window->event.type == sfEvtClosed)
                sfRenderWindow_close(global->window->window);
    }
    return;
}