/*
** EPITECH PROJECT, 2022
** dante
** File description:
** main
*/

#include "../include/generator.h"

void end_of_map(generator_t *gen)
{
    gen->tab[1][gen->width - 1] = '*';
    gen->tab[1][gen->width - 2] = '*';
}

generator_t *init_gen(int ac, char **av)
{
    generator_t *gen = malloc(sizeof(generator_t));

    gen->width = my_getnbr(av[1]);
    gen->height = my_getnbr(av[2]);
    gen->tab = malloc(sizeof(char *) * gen->height);
    srand(time(NULL));
    return (gen);
}

int main(int ac, char **av)
{
    generator_t *gen;

    error_handling(ac, av);
    gen = init_gen(ac, av);
    init_maze(gen);
    path(gen);
    (ac == 3) ? end_of_map(gen) : 0;
    for (int y = 0; gen->tab[y]; y++) {
        write(1, gen->tab[y], my_strlen(gen->tab[y]));
        if (gen->tab[y + 1])
            my_putchar('\n');
    }
    return (0);
}