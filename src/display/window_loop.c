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
    sfBool isReleased = sfTrue;

    while (sfRenderWindow_isOpen(global->window->window)) {
        mouse_position = sfMouse_getPositionRenderWindow(global->window->window);
        while (sfRenderWindow_pollEvent(global->window->window, &global->window->event))
            if (global->window->event.type == sfEvtClosed)
                sfRenderWindow_close(global->window->window);
        sfRenderWindow_clear(global->window->window, sfBlack);
        display_pixels(global->window->window, pixels_head);
        sfRenderWindow_display(global->window->window);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            if (global->currentTool == pencil)
                pencil_tool(&pixels_head, mouse_position);
            else if (global->currentTool == eraser)
                eraser_tool(&pixels_head, mouse_position);
            usleep(500);
        }
        if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue &&
            isReleased == sfTrue) {
            if (global->currentTool == pencil)
                global->currentTool = eraser;
            else
                global->currentTool = pencil;
            isReleased = sfFalse;
        }
        else if (sfKeyboard_isKeyPressed(sfKeySpace) == sfFalse) {
            isReleased = sfTrue;
        }
    }
    return;
}