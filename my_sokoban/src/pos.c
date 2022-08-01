/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** pos
*/

#include "../include/sokoban.h"
#include "../include/my.h"

void find_player(global_t *global)
{
    for (int i = 0; i < global->nb_words; i++) {
        for (int j = 0; j < my_strlen(global->tab[i]); j++)
            define_pos(global, global->tab[i][j], i, j);
    }
    return;
}

void fill_pos_o(global_t *global)
{
    int nb_o = 0;
    int i = 0;

    while (nb_o < global->nb_o) {
        nb_o = fill_pos_o_two(global, i, nb_o);
        i++;
    }
    return;
}

int fill_pos_o_two(global_t *global, int line, int nb_o)
{
    for (int i = 0; i < my_strlen(global->tab[line]); i++) {
        if (global->tab[line][i] == 'O') {
            global->pos_o[nb_o] = malloc(sizeof(int) * 2);
            global->pos_o[nb_o]->line = line;
            global->pos_o[nb_o]->col = i;
            nb_o++;
        }
    }
    return (nb_o);
}

void check_player(global_t *global)
{
    if (global->tab[global->pos_p->line][global->pos_p->col - 1] == '#' &&
    global->tab[global->pos_p->line + 1][global->pos_p->col] == '#' &&
    global->tab[global->pos_p->line - 1][global->pos_p->col] == '#' &&
    global->tab[global->pos_p->line][global->pos_p->col + 1] == '#')
        exit(84);
}

void define_pos(global_t *global, char c, int i, int j)
{
    if (c == 'P') {
        global->pos_p->line = i;
        global->pos_p->col = j;
    }
    return;
}
