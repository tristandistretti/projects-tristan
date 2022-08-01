/*
** EPITECH PROJECT, 2022
** dante
** File description:
** algorithm
*/

#include "../include/generator.h"

static void algorithm_maze_random(generator_t *gen, int *y, int *x)
{
    int temp = 0;

    temp = rand() % 2;
    gen->tab[*y][*x] = '*';
    if (temp == 0 && *x > 1) {
        for (int count = 0; *x - count >= 0 && count < 2; count++)
            gen->tab[*y][*x - count] = '*';
    }
    if (temp == 1 || *x <= 1) {
        if (*y - 1 >= 0) {
            gen->tab[*y - 1][*x] = '*';
            gen->tab[*y - 2][*x] = '*';
        }
    }
}

void path(generator_t *gen)
{
    int y = gen->height - 1;
    int minimum_value = 0;

    if (gen->height % 2 == 0)
        y -= 1;
    if (gen->width % 2 == 0)
        minimum_value = 1;
    else
        minimum_value = 0;
    for (; y >= 0; y -= 2) {
        for (int x = gen->width - 1; x >= minimum_value; x -= 2)
            algorithm_maze_random(gen, &y, &x);
    }
    for (int x = gen->width - 1; x >= 0; x--)
        gen->tab[0][x] = '*';
}
