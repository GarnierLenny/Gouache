/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** push_back
*/

#include "my.h"

void push_back(pixels **pixels_head, sfUint8 *color, sfVector2f position)
{
    pixels *new_pixel =
        (pixels*)malloc(sizeof(pixels));

    new_pixel->sprite = malloc(sizeof(sprite));
    new_pixel->next = NULL;

    new_pixel->sprite->color[0] = color[0];
    new_pixel->sprite->color[1] = color[1];
    new_pixel->sprite->color[2] = color[2];
    new_pixel->sprite->color[3] = color[3];

    init_sprite(&new_pixel->sprite, color, position);

    if ((*pixels_head) == NULL) {
        (*pixels_head) = (pixels*)malloc(sizeof(pixels));
        (*pixels_head) = new_pixel;
        return;
    }
    while ((*pixels_head)->next != NULL)
        (*pixels_head) = (*pixels_head)->next;
    new_pixel->prev = (*pixels_head);
    (*pixels_head)->next = new_pixel;
    while ((*pixels_head)->prev != NULL)
        (*pixels_head) = (*pixels_head)->prev;
    return;
}
