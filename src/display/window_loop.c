/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** window_loop
*/

#include "my.h"

void window_loop(global_t *global, pixels *pixels_head)
{
    push_back(&pixels_head, create_color(255, 255, 255, 255), (sfVector2f){100, 100});
    print_list(pixels_head);
    push_back(&pixels_head, create_color(255, 255, 255, 255), (sfVector2f){200, 200});
    print_list(pixels_head);
    push_back(&pixels_head, create_color(255, 255, 255, 255), (sfVector2f){300, 300});
    print_list(pixels_head);
    push_back(&pixels_head, create_color(255, 255, 255, 255), (sfVector2f){400, 400});
    print_list(pixels_head);
    push_front(&pixels_head, create_color(0, 255, 255, 255), (sfVector2f){200, 400});
    print_list(pixels_head);

    while (sfRenderWindow_isOpen(global->window->window)) {
        while (sfRenderWindow_pollEvent(global->window->window, &global->window->event))
            if (global->window->event.type == sfEvtClosed)
                sfRenderWindow_close(global->window->window);
        sfRenderWindow_clear(global->window->window, sfBlack);
        display_pixels(global->window->window, pixels_head);
        sfRenderWindow_display(global->window->window);
    }
    return;
}