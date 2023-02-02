/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** push_front
*/

#include "my.h"

void push_front(struct pixels **pixels_head, int value)
{
    struct pixels *new_pixel =
        (struct pixels*)malloc(sizeof(struct pixels));

    new_pixel->data = value;
    new_pixel->next = (*pixels_head);
    new_pixel->prev = NULL;

    if ((*pixels_head) != NULL)
        (*pixels_head)->prev = new_pixel;
    (*pixels_head) = new_pixel;
    return;
}