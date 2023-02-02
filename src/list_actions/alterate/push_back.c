/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** push_back
*/

#include "my.h"

void push_back(struct pixels **pixels_head, int value)
{
    struct pixels *new_pixel =
        (struct pixels*)malloc(sizeof(struct pixels));

    new_pixel->next = NULL;
    new_pixel->data = value;
    while ((*pixels_head)->next != NULL)
        (*pixels_head) = (*pixels_head)->next;
    (*pixels_head)->next = new_pixel;
    while ((*pixels_head)->prev != NULL)
        (*pixels_head) = (*pixels_head)->prev;
    return;
}
