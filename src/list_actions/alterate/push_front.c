/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** push_front
*/

#include "my.h"

/* void init_new_pixel(pixels **new_pixel)
{
    (*new_pixel) = (pixels*)malloc(sizeof(pixels));

    (*new_pixel)->sprite = malloc(sizeof(sprite));
    (*new_pixel)->next = (*pixels_head);
    (*new_pixel)->prev = NULL;
    return;
} */

void push_front(pixels **pixels_head, sfUint8 *color, sfVector2f position)
{
    pixels *new_pixel =
        (pixels*)malloc(sizeof(pixels));

    new_pixel->sprite = malloc(sizeof(sprite));
    new_pixel->next = (*pixels_head);
    new_pixel->prev = NULL;
    init_sprite(&new_pixel->sprite, color, position);
    if ((*pixels_head) == NULL) {
        (*pixels_head) = (pixels*)malloc(sizeof(pixels));
        (*pixels_head) = new_pixel;
        return;
    }
    if ((*pixels_head) != NULL)
        (*pixels_head)->prev = new_pixel;
    (*pixels_head) = new_pixel;
    return;
}