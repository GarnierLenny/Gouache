/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** create_color
*/

#include "my.h"

rgba create_color(sfUint8 r, sfUint8 g,
    sfUint8 b, sfUint8 a)
{
    rgba color = {r, g, b, a};
    
    return color;
}