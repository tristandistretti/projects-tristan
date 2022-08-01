/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** lose
*/

#include "../include/my.h"
#include "../include/sokoban.h"

void lose_cond(global_t *global)
{
    int stuck_x = 0;

    for (int lin = 0; lin < global->nb_words; lin++) {
        for (int col = 0; col < my_strlen(global->tab[lin]); col++) {
            stuck_x += (global->tab[lin][col] == 'X') ?
            check_near(global, lin, col) : 0;
        }
    }
    if (stuck_x == global->nb_o)
        exit(1);
}

int check_near(global_t *global, int lin, int col)
{
    if (count_neighbors(global, lin, col) >= 2)
        return (1);
    return (0);
}

static int is_obstacle(char c)
{
    if (c == '#' || c == 'X')
        return (1);
    return (0);
}

int count_neighbors(global_t *global, int lin, int col)
{
    if (is_obstacle(global->tab[lin - 1][col]) == 1 &&
    is_obstacle(global->tab[lin][col - 1]) == 1)
        return (2);
    if (is_obstacle(global->tab[lin][col - 1]) == 1 &&
    is_obstacle(global->tab[lin + 1][col]) == 1)
        return (2);
    if (is_obstacle(global->tab[lin + 1][col]) == 1 &&
    is_obstacle(global->tab[lin][col + 1]) == 1)
        return (2);
    if (is_obstacle(global->tab[lin][col + 1]) == 1 &&
    is_obstacle(global->tab[lin - 1][col]) == 1)
        return (2);
    return (0);
}
