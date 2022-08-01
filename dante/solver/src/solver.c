/*
** EPITECH PROJECT, 2022
** B-CPE-200-STG-2-1-dante-thomas.decaudain
** File description:
** solver
*/

#include "../include/solver.h"

static int fill_sol(global_t *global, int x, int y);

static int checker(global_t *global, int x, int y)
{
    if (x >= 0 && x < global->nbwords && y >= 0 && y < global->len &&
    global->matrix[x][y] == 1)
        return (1);
    else
        return (0);
}

static int move(global_t *global, int x, int y)
{
    if (fill_sol(global, x, y + 1) == 1)
        return (1);
    if (fill_sol(global, x + 1, y) == 1)
        return (1);
    if (fill_sol(global, x - 1, y) == 1)
        return (1);
    if (fill_sol(global, x, y - 1) == 1)
        return (1);
}

static int fill_sol(global_t *global, int x, int y)
{
    if (x == global->nbwords - 1 && y == global->len - 1 &&
    global->matrix[x][y] == 1) {
        global->sol[x][y] = 1;
        return (1);
    }
    if (checker(global, x, y) == 1) {
        if (global->sol[x][y] == 1)
            return (0);
        global->sol[x][y] = 1;
        if (move(global, x, y) == 1)
            return (1);
        global->sol[x][y] = 0;
        return (0);
    }
    return (0);
}

int solver(global_t *global)
{
    if (fill_sol(global, 0, 0) == 0) {
        my_putstr("no solution found");
        free_global(global, 0);
    }
    change_tab(global);
    for (int i = 0; i < global->nbwords; i++, my_putchar('\n'))
        my_putstr(global->tab[i]);
    free_global(global, 0);
}
