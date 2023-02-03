/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** push_front
*/

#include "my.h"

void push_front(pixels **pixels_head, rgba color)
{
    pixels *new_pixel =
        (pixels*)malloc(sizeof(pixels));

    new_pixel->sprite = malloc(sizeof(sprite));
    new_pixel->next = (*pixels_head);
    new_pixel->prev = NULL;
    new_pixel->sprite->color = color;
    if ((*pixels_head) != NULL)
        (*pixels_head)->prev = new_pixel;
    (*pixels_head) = new_pixel;
    return;
}