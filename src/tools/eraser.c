/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** eraser
*/

#include "my.h"

void eraser_tool(pixels **pixels_head, sfVector2i mouse_position)
{
    pixels *tmp = (*pixels_head);
    int index = 0;

    while (tmp != NULL) {
        if (abs(tmp->sprite->position.x - mouse_position.x) < 5 &&
            abs(tmp->sprite->position.y - mouse_position.y) < 5) {
            erase(pixels_head, index);
        }
        index += 1;
        tmp = tmp->next;
    }
    return;
}