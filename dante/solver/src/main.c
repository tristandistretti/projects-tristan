/*
** EPITECH PROJECT, 2022
** B-CPE-200-STG-2-1-dante-thomas.decaudain
** File description:
** main
*/

#include "../include/solver.h"

static void init(global_t *global)
{
    int len;

    global->tab = my_str_to_word_arr(global->map, '\n');
    len = my_lim_len(global->map, '\n');
    global->nbwords = nb_words(global->map, '\n');
    global->p = malloc(sizeof(pos_t));
    global->p->col = 0;
    global->p->line = 0;
    global->len = len;
    init_matrix(global);
}

int main(int ac, char **av)
{
    global_t *global = malloc(sizeof(global_t));

    if (ac != 2 || fill_map(ac, av, global) == 84)
        return (84);
    else {
        init(global);
        check_map(global);
        solver(global);
    }
}
