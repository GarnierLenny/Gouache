/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** init_sprite
*/

#include "my.h"

void init_sprite(sprite **sprite, sfUint8 *color, sfVector2f position)
{
    (*sprite)->color[0] = color[0];
    (*sprite)->color[1] = color[1];
    (*sprite)->color[2] = color[2];
    (*sprite)->color[3] = color[3];
    (*sprite)->texture = sfTexture_create(1, 1);
    sfTexture_updateFromPixels((*sprite)->texture, color, 1, 1, 0, 0);
    (*sprite)->sprite = sfSprite_create();
    sfSprite_setTexture((*sprite)->sprite,
        (*sprite)->texture, sfTrue);
    sfSprite_setPosition((*sprite)->sprite, position);
    return;
}