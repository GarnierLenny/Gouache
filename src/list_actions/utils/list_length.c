/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** list_length
*/

#include "my.h"

int pixels_length(struct pixels *pixels_head)
{
    struct pixels *tmp = pixels_head;
    int length = 0;

    while (tmp != NULL) {
        length++;
        tmp = tmp->next;
    }
    return length;
}