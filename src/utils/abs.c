/*
** EPITECH PROJECT, 2023
** Gouache
** File description:
** abs
*/

#include "my.h"

int abs(int nb)
{
    if (nb < 0)
        return nb * (-1);
    return nb;
}
