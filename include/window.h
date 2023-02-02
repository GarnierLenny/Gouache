/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** window
*/

#include "include.h"

#ifndef WINDOW_H_
#define WINDOW_H_

typedef struct window_s {
    sfRenderWindow *window;
    sfEvent event;
    sfVideoMode mode;
    char *window_name;
} window_t;

#endif /* !WINDOW_H_ */
