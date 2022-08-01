/*
** EPITECH PROJECT, 2022
** B-CPE-200-STG-2-1-dante-thomas.decaudain
** File description:
** matrix
*/

#include "../include/solver.h"

static void fill_matrix(global_t *global,  int line)
{
    for (int i = 0; i < global->len; i++) {
        global->sol[line][i] = 0;
        if (global->tab[line][i] == 'X')
            global->matrix[line][i] = 0;
        else
            global->matrix[line][i] = 1;
    }
}

void init_matrix(global_t *global)
{
    global->matrix = malloc(sizeof(int *) * global->nbwords);
    global->sol = malloc(sizeof(int *) * global->nbwords);
    for (int i = 0; i < global->nbwords; i++) {
        global->matrix[i] = malloc(sizeof(int) * global->len);
        global->sol[i] = malloc(sizeof(int) * global->len);
    }
    for (int j = 0; j < global->nbwords; j++)
        fill_matrix(global, j);
}
