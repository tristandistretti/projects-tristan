/*
** EPITECH PROJECT, 2022
** dante
** File description:
** fill_maze
*/

#include "../include/generator.h"

void fill_maze(generator_t *gen)
{
    int x = 0;

    for (int y = 0; y < gen->height; y++) {
        for (x = 0; x < gen->width; x++) {
            gen->tab[y][x] =
            ((y == 0 && x == 0) ||
            (x == gen->width - 1 && y == gen->height - 1)) ?
            '*' : 'X';
        }
    }
}
