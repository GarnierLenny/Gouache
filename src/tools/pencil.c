/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** pencil
*/

#include "my.h"

void pencil_tool(pixels **pixels_head, sfVector2i mouse_position)
{
    push_back(pixels_head, create_color(255, 255, 255, 255), (sfVector2f)
            {mouse_position.x, mouse_position.y});
}