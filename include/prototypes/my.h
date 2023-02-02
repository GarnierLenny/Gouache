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
void push_back(struct pixels **pixels_head, int value);
void push_front(struct pixels **pixels_head, int value);
void pop_front(struct pixels **pixels_head);
void pop_back(struct pixels **pixels_head);
int pixels_length(struct pixels *pixels_head);
void print_list(struct pixels *pixels_head);
void erase(struct pixels **pixels_head, int index);

#endif /* !MY_H_ */
