/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** move_x
*/

#include "../include/my.h"
#include "../include/sokoban.h"

void up_x(global_t *global)
{
    if (check_o(global) == 1)
        global->tab[global->pos_p->line][global->pos_p->col] = 'O';
    else
        global->tab[global->pos_p->line][global->pos_p->col] = ' ';
    global->tab[global->pos_p->line - 1][global->pos_p->col] = 'P';
    global->tab[global->pos_p->line - 2][global->pos_p->col] = 'X';
    global->pos_p->line--;
}

void down_x(global_t *global)
{
    if (check_o(global) == 1)
        global->tab[global->pos_p->line][global->pos_p->col] = 'O';
    else
        global->tab[global->pos_p->line][global->pos_p->col] = ' ';
    global->tab[global->pos_p->line + 1][global->pos_p->col] = 'P';
    global->tab[global->pos_p->line + 2][global->pos_p->col] = 'X';
    global->pos_p->line++;
}

void right_x(global_t *global)
{
    if (check_o(global) == 1)
        global->tab[global->pos_p->line][global->pos_p->col] = 'O';
    else
        global->tab[global->pos_p->line][global->pos_p->col] = ' ';
    global->tab[global->pos_p->line][global->pos_p->col + 1] = 'P';
    global->tab[global->pos_p->line][global->pos_p->col + 2] = 'X';
    global->pos_p->col++;
}

void left_x(global_t *global)
{
    if (check_o(global) == 1)
        global->tab[global->pos_p->line][global->pos_p->col] = 'O';
    else
        global->tab[global->pos_p->line][global->pos_p->col] = ' ';
    global->tab[global->pos_p->line][global->pos_p->col - 1] = 'P';
    global->tab[global->pos_p->line][global->pos_p->col - 2] = 'X';
    global->pos_p->col--;
}
