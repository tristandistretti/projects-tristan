/*
** EPITECH PROJECT, 2022
** B-CPE-200-STG-2-1-dante-thomas.decaudain
** File description:
** map
*/

#include "../include/solver.h"

void check_map(global_t *global)
{
    int j = 0;

    if (global->tab[0][0] != '*' || global->tab[global->nbwords - 1]
    [global->len - 1] != '*') {
        my_putstr("no solution found\n");
        free_global(global, 0);
    }
}

int fill_map(int ac, char **av, global_t *global)
{
    int fd = open(av[1], O_RDONLY);
    struct stat buffer;
    int len;
    int i = 0;

    stat(av[1], &buffer);
    len = buffer.st_size;
    global->map = malloc(sizeof(char) * len + 1);
    if (fd == -1)
        return (84);
    if (len <= 0)
        return (84);
    read(fd, global->map, len);
    close(fd);
    global->map[len] = '\0';
    return (0);
}

static void check_win_path(global_t *global, int x, int y)
{
    if (global->sol[x][y] == 1 && global->tab[x][y] == '*') {
        global->tab[x][y] = 'o';
        return;
    }
    if (global->sol[x][y] == 0 && global->tab[x][y] == '*') {
        global->tab[x][y] = '*';
        return;
    }
    if (global->tab[x][y] == 'X')
        return;
}

void change_tab(global_t *global)
{
    for (int i = 0; i < global->nbwords; i++) {
        for (int j = 0; j < global->len; j++)
            check_win_path(global, i, j);
    }
}
