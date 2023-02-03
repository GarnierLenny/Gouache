/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** window_loop
*/

#include "my.h"

void window_loop(global_t *global, pixels *pixels_head)
{
    sfVector2i mouse_position;

    while (sfRenderWindow_isOpen(global->window->window)) {
        mouse_position = sfMouse_getPositionRenderWindow(global->window->window);
        while (sfRenderWindow_pollEvent(global->window->window, &global->window->event))
            if (global->window->event.type == sfEvtClosed)
                sfRenderWindow_close(global->window->window);
        sfRenderWindow_clear(global->window->window, sfBlack);
        display_pixels(global->window->window, pixels_head);
        sfRenderWindow_display(global->window->window);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            push_back(&pixels_head, create_color(255, 255, 255, 255), (sfVector2f)
                {mouse_position.x, mouse_position.y});
            usleep(500);
        }
    }
    return;
}