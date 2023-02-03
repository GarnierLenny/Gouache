/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** pixels
*/

#include "sprite.h"

#ifndef PIXELS_H_
#define PIXELS_H_

typedef struct pixels_s {
    sprite *sprite;
    struct pixels_s *next;
    struct pixels_s *prev;
} pixels;

#endif /* !PIXELS_H_ */
