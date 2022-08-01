/*
** EPITECH PROJECT, 2022
** dante
** File description:
** error_handling
*/

#include "../include/generator.h"

static int is_number(int ac, char **av)
{
    for (int i = 0; av[1][i]; i++) {
        if (av[1][i] < '0' || av[1][i] > '9')
            return (0);
    }
    for (int i = 0; av[2][i]; i++) {
        if (av[2][i] < '0' || av[2][i] > '9')
            return (0);
    }
    return (1);
}

void error_handling(int ac, char **av)
{
    if (ac > 4 || (ac == 4 && my_strcmp(av[3], "perfect")))
        exit(84);
    if (!is_number(ac, av))
        exit(84);
}
