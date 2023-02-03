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

    push_front(&pixels_head, create_color(0, 1, 2, 3));
    print_list(pixels_head);
    push_front(&pixels_head, create_color(21, 22, 23, 24));
    print_list(pixels_head);
    push_back(&pixels_head, create_color(12, 13, 14, 15));
    print_list(pixels_head);
    pop_back(&pixels_head);
    print_list(pixels_head);
    //global_t *global = init_global();
    //window_loop(global);
    return 0;
}