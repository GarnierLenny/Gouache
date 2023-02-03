/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** display;pixels
*/

#include "my.h"

void display_pixels(sfRenderWindow *window, pixels *pixels_head)
{
    pixels *tmp = (pixels*)malloc(sizeof(pixels));

    tmp = pixels_head;
    while (tmp != NULL) {
        sfRenderWindow_drawSprite(window, tmp->sprite->sprite, NULL);
        tmp = tmp->next;
    }
}