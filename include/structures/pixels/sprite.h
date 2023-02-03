/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** sprite
*/

#include "include.h"
#include "rgba.h"

#ifndef SPRITE_H_
#define SPRITE_H_

typedef struct sprite_s {
    rgba color;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2i position;
} sprite;

#endif /* !SPRITE_H_ */
