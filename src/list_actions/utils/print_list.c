/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** print_list
*/

#include "my.h"

void print_list(pixels *pixels_head)
{
    pixels *tmp = pixels_head;
    int index = 0;

    if (pixels_length(tmp) == 0) {
        printf("[List is empty.]\n");
        return;
    }
    while (tmp != NULL) {
        printf("[%d, %d, %d, %d]", tmp->sprite->color[0],
            tmp->sprite->color[1],
            tmp->sprite->color[2],
            tmp->sprite->color[3]);
        if (tmp->next != NULL)
            printf(" -> ");
        tmp = tmp->next;
        index++;
    }
    printf("\n");
}