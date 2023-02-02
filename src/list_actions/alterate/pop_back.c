/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** pop_back
*/

#include "my.h"

void pop_back(struct pixels **pixels_head)
{
    if (pixels_length((*pixels_head)) <= 1) {
        (*pixels_head) = NULL;
        return;
    }
    while ((*pixels_head)->next->next != NULL)
        (*pixels_head) = (*pixels_head)->next;
    (*pixels_head)->next = NULL;
    while ((*pixels_head)->prev != NULL)
        (*pixels_head) = (*pixels_head)->prev;
}