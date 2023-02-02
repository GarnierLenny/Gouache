/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** init_window
*/

#include "window.h"

window_t *init_window(void)
{
    sfVideoMode mode = {800, 600, 32};
    window_t *window = malloc(sizeof(window_t));

    window = malloc(sizeof(window_t));
    window->window = sfRenderWindow_create(mode, "Gouache", sfResize | sfClose, NULL);
    return window;
}