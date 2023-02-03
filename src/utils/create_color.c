/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** create_color
*/

#include "my.h"

sfUint8 *create_color(sfUint8 r, sfUint8 g, sfUint8 b, sfUint8 a)
{
    sfUint8 *color = malloc(sizeof(sfUint8) * 4);

    color[0] = r;
    color[1] = g;
    color[2] = b;
    color[3] = a;
    return color;
}