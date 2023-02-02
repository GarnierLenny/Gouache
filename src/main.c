/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main
*/

#include "my.h"

int main(void)
{
    struct pixels *pixels_head = NULL;

    print_list(pixels_head);
    push_front(&pixels_head, 1);
    push_front(&pixels_head, 2);
    push_front(&pixels_head, 3);
    push_back(&pixels_head, 4);
    print_list(pixels_head);
    pop_back(&pixels_head);
    print_list(pixels_head);
    //global_t *global = init_global();
    //window_loop(global);


    return 0;
}