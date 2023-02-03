/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main
*/

#include "my.h"

int main(void)
{
    pixels *pixels_head = NULL;
    global_t *global = init_global();

    window_loop(global, pixels_head);
    free(pixels_head);
    return 0;
}