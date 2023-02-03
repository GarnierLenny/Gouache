/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** push_back
*/

#include "my.h"

void push_back(pixels **pixels_head, rgba color)
{
    pixels *new_pixel =
        (pixels*)malloc(sizeof(pixels));

    new_pixel->sprite = malloc(sizeof(sprite));
    new_pixel->next = NULL;
    new_pixel->sprite->color = color;
    while ((*pixels_head)->next != NULL)
        (*pixels_head) = (*pixels_head)->next;
    (*pixels_head)->next = new_pixel;
    while ((*pixels_head)->prev != NULL)
        (*pixels_head) = (*pixels_head)->prev;
    return;
}
