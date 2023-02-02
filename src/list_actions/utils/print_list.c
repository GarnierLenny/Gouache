/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** print_list
*/

#include "my.h"

void print_list(struct pixels *pixels_head)
{
    struct pixels *tmp = pixels_head;

    if (pixels_length(tmp) == 0) {
        printf("[List is empty.]\n");
        return;
    }
    while (tmp != NULL) {
        printf("[%d]", tmp->data);
        if (tmp->next != NULL)
            printf(" -> ");
        tmp = tmp->next;
    }
    printf("\n");
}