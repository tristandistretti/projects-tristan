/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** move
*/

#include "../include/my.h"
#include "../include/sokoban.h"

void move_right(global_t *global)
{
    if (check_o(global) == 1)
        global->tab[global->pos_p->line][global->pos_p->col] = 'O';
    else
        global->tab[global->pos_p->line][global->pos_p->col] = ' ';
    global->tab[global->pos_p->line][global->pos_p->col + 1] = 'P';
    global->pos_p->col++;
}

void move_left(global_t *global)
{
    if (check_o(global) == 1)
        global->tab[global->pos_p->line][global->pos_p->col] = 'O';
    else
        global->tab[global->pos_p->line][global->pos_p->col] = ' ';
    global->tab[global->pos_p->line][global->pos_p->col - 1] = 'P';
    global->pos_p->col--;
}

void move_up(global_t *global)
{
    if (check_o(global) == 1)
        global->tab[global->pos_p->line][global->pos_p->col] = 'O';
    else
        global->tab[global->pos_p->line][global->pos_p->col] = ' ';
    global->tab[global->pos_p->line - 1][global->pos_p->col] = 'P';
    global->pos_p->line--;
}

void move_down(global_t *global)
{
    if (check_o(global) == 1)
        global->tab[global->pos_p->line][global->pos_p->col] = 'O';
    else
        global->tab[global->pos_p->line][global->pos_p->col] = ' ';
    global->tab[global->pos_p->line + 1][global->pos_p->col] = 'P';
    global->pos_p->line++;
}
