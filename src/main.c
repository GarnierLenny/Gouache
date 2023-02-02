/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main
*/

#include "my.h"

int main(void)
{
    global_t *global = init_global();

    window_loop(global);
    return 0;
}