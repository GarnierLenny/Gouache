/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** my
*/

#include "global.h"

#ifndef MY_H_
#define MY_H_

global_t *init_global(void);
window_t *init_window(void);
void window_loop(global_t *global);
void push_back(pixels **pixels_head, rgba color);
void push_front(pixels **pixels_head, rgba color);
void pop_front(pixels **pixels_head);
void pop_back(pixels **pixels_head);
int pixels_length(pixels *pixels_head);
void print_list(pixels *pixels_head);
void erase(pixels **pixels_head, int index);
rgba create_color(sfUint8 r, sfUint8 g, sfUint8 b, sfUint8 a);

#endif /* !MY_H_ */
