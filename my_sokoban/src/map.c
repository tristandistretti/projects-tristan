/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** map
*/

#include "../include/sokoban.h"
#include "../include/my.h"

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

int nb_of_x_o(char *map, char lim)
{
    int res = 0;

    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == lim)
            res++;
    }
    return (res);
}

void check_map(global_t *global)
{
    int check_p = 0;
    int check_wall = 0;

    for (int i = 0; global->map[i] != '\0'; i++) {
        (global->map[i] != '#' && global->map[i] != 'P' &&
        global->map[i] != ' ' && global->map[i] != 'O' &&
        global->map[i] != 'X' && global->map[i] != '\n') ? exit(84) : 0;
    }
    for (int i = 0; global->map[i] != '\0'; i++) {
        if (global->map[i] == 'P')
            check_p++;
    }
    for (int i = 0; global->map[i] != '\0'; i++) {
        if (global->map[i] == '#')
            check_wall++;
    }
    if (nb_of_x_o(global->map, 'X') != nb_of_x_o(global->map, 'O') ||
    check_p > 1 || check_wall <= 1)
        exit(84);
}
