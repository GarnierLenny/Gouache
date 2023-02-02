/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** erase
*/

#include "my.h"

void erase(struct pixels **pixels_head, int index)
{
    int current = 0;

    if (index < 0 || index >= pixels_length((*pixels_head))) {
        printf("[Index is out of list's range.]\n");
        return;
    }
    while (current + 1 < index) {
        (*pixels_head) = (*pixels_head)->next;
        current++;
    }
    (*pixels_head)->next = (*pixels_head)->next->next;
    while ((*pixels_head)->prev != NULL)
        (*pixels_head) = (*pixels_head)->prev;
    return;
}