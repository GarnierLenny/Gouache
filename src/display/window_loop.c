/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** window_loop
*/

#include "global.h"

sfColor color(unsigned short r, unsigned short g, unsigned short b,
    unsigned short a)
{
    sfColor color = {r, g, b, a};

    return color;
}

void window_loop(global_t *global)
{
    sfImage *image = sfImage_createFromColor(1, 1, color(255,
        255, 255, 255));
    sfSprite *sprite;
    sfTexture *texture;
    sfColor color = {255, 255, 255, 255};
    sfUint8 pixels[4] = {color.r, color.g, color.b, color.a};

    texture = sfTexture_create(1, 1);
    sfTexture_updateFromPixels(texture, pixels, 1, 1, 0, 0);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, (sfVector2f){100, 100});

    while (sfRenderWindow_isOpen(global->window->window)) {
        while (sfRenderWindow_pollEvent(global->window->window, &global->window->event))
            if (global->window->event.type == sfEvtClosed)
                sfRenderWindow_close(global->window->window);
        sfRenderWindow_clear(global->window->window, sfBlack);
        sfRenderWindow_drawSprite(global->window->window, sprite, NULL);
        sfRenderWindow_display(global->window->window);
    }
    return;
}