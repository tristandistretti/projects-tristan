/*
** EPITECH PROJECT, 2022
** dante
** File description:
** init
*/

#include "../include/generator.h"

void init_maze(generator_t *gen)
{
    int i = 0;

    gen->tab = malloc(sizeof(char *) * (gen->height));
    if (gen->tab == NULL)
        return;
    for (; i < gen->height; i++) {
        gen->tab[i] = malloc(sizeof(char) * (gen->width));
        if (gen->tab[i] == NULL)
            return;
    }
    fill_maze(gen);
}