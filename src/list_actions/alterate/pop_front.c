/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** pop_front
*/

#include "my.h"

void pop_front(pixels **pixels_head)
{
    if (pixels_length((*pixels_head)) <= 1) {
        (*pixels_head) = NULL;
        return;
    }
    (*pixels_head) = (*pixels_head)->next;
    (*pixels_head)->prev = NULL;
}