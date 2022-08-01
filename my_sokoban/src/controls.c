/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** controls
*/

#include "../include/my.h"
#include "../include/sokoban.h"

void go_right(global_t *global)
{
    if (global->tab[global->pos_p->line][global->pos_p->col + 1] != '#') {
        if (global->tab[global->pos_p->line][global->pos_p->col + 1] != 'X')
            move_right(global);
        else if (global->tab[global->pos_p->line][global->pos_p->col + 2]
        != 'X' && global->tab[global->pos_p->line][global->pos_p->col + 2]
        != '#')
            right_x(global);
    }
    game(global);
    return;
}

void go_left(global_t *global)
{
    if (global->tab[global->pos_p->line][global->pos_p->col - 1] != '#') {
        if (global->tab[global->pos_p->line][global->pos_p->col - 1] != 'X')
            move_left(global);
        else if (global->tab[global->pos_p->line][global->pos_p->col - 2]
        != 'X' && global->tab[global->pos_p->line][global->pos_p->col - 2]
        != '#')
            left_x(global);
    }
    game(global);
    return;
}

void go_down(global_t *global)
{
    if (global->tab[global->pos_p->line + 1][global->pos_p->col] != '#') {
        if (global->tab[global->pos_p->line + 1][global->pos_p->col] != 'X')
            move_down(global);
        else if (global->tab[global->pos_p->line + 2][global->pos_p->col]
        != 'X' && global->tab[global->pos_p->line + 2][global->pos_p->col]
        != '#')
            down_x(global);
    }
    game(global);
    return;
}

void go_up(global_t *global)
{
    if (global->tab[global->pos_p->line - 1][global->pos_p->col] != '#') {
        if (global->tab[global->pos_p->line - 1][global->pos_p->col] != 'X')
            move_up(global);
        else if (global->tab[global->pos_p->line - 2][global->pos_p->col]
        != 'X' && global->tab[global->pos_p->line - 2][global->pos_p->col]
        != '#')
            up_x(global);
    }
    game(global);
    return;
}

void controls(global_t *global, int gch)
{
    if (gch == KEY_UP) {
        clear();
        go_up(global);
    }
    if (gch == KEY_DOWN) {
        clear();
        go_down(global);
    }
    if (gch == KEY_RIGHT) {
        clear();
        go_right(global);
    }
    if (gch == KEY_LEFT) {
        clear();
        go_left(global);
    }
}
