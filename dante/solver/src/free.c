/*
** EPITECH PROJECT, 2022
** B-CPE-200-STG-2-1-dante-thomas.decaudain
** File description:
** free
*/

#include "../include/solver.h"

void free_global(global_t *global, int status)
{
    free(global->map);
    for (int j = 0; j < global->nbwords; j++)
        free(global->tab[j]);
    for (int k = 0; k < global->nbwords; k++)
        free(global->matrix[k]);
    if (status >= 0)
        exit(status);
    else
        return;
}
