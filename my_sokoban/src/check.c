/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** check
*/

#include "../include/sokoban.h"
#include "../include/my.h"

int check_o(global_t *global)
{
    for (int i = 0; i < global->nb_o; i++) {
        if (global->pos_p->line == global->pos_o[i]->line && global->pos_o[i]
        ->col == global->pos_p->col)
            return (1);
    }
    return (0);
}
