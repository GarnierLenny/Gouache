/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** init_global
*/

#include "global.h"
#include "my.h"

global_t *init_global(void)
{
    global_t *global = malloc(sizeof(global_t));

    global->currentTool = pencil;
    global->window = init_window();
    return global;
}