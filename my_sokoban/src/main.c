/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** main
*/

#include "../include/my.h"
#include "../include/sokoban.h"

void game(global_t *global)
{
    int ln = my_strlen(global->tab[0]);
    int gch;

    while (1) {
        clear();
        for (int i = 0; i < global->nb_words; i++)
            mvprintw((LINES / 2) - global->nb_words / 2 + i,
            (COLS / 2) - ln / 2, global->tab[i]);
        check_size(ln, global->nb_words);
        refresh();
        check_win(global);
        lose_cond(global);
        gch = getch();
        if (gch == 32)
            start(global);
        controls(global, gch);
    }
}

void check_size(int len, int nb_words)
{
    if (LINES < nb_words || COLS < len) {
        clear();
        mvprintw(LINES / 2, COLS / 2 - 5,
        "enlarge pls");
    }
}

void check_win(global_t *global)
{
    int end = 0;

    for (int i = 0; i < global->nb_words; i++) {
        for (int j = 0; j < my_strlen(global->tab[i]); j++)
            end = (global->tab[i][j] == 'O') ? end + 1 : end;
    }
    for (int i = 0; i < global->nb_o; i++) {
        if (global->pos_p->line == global->pos_o[i]->line &&
        global->pos_p->col == global->pos_o[i]->col)
            return;
    }
    if (end == 0)
        exit(0);
}

int start(global_t *global)
{
    initscr();
    noecho();
    keypad(stdscr, true);
    global->tab = my_str_to_word_arr(global->map, '\n');
    global->pos_p = malloc(sizeof(pos_t));
    global->nb_o = nb_of_x_o(global->map, 'O');
    global->lose_count = 0;
    global->pos_o = malloc(sizeof(pos_t *) * global->nb_o + 1);
    global->nb_words = nb_words(global->map, '\n');
    find_player(global);
    check_player(global);
    fill_pos_o(global);
    game(global);
}

int main(int ac, char **av)
{
    global_t *global = malloc(sizeof(global_t));

    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        help();
        return (0);
    }
    if (ac != 2 || fill_map(ac, av, global) == 84)
        return (84);
    check_map(global);
    start(global);
    return (0);
}
