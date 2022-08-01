/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main bsq
*/

#include "include/my.h"
#include "include/list.h"

char *read_map(char *file)
{
    int fd = open(file, O_RDONLY);
    struct stat buffer;
    stat(file, &buffer);
    int len = buffer.st_size;
    char *map = malloc(sizeof(char) * (len + 1));
    int i = 0;

    if (fd == -1)
        return ("84");
    if (len <= 0)
        return ("84");
    read(fd, map, len);
    close(fd);
    map[len] = '\0';
    return (map);
}

int nb_column(char *map)
{
    int i = 0;
    int j = 0;

    for (; *map != '\n'; map += 1);
    map += 1;
    for (; map[i] != '\n'; i++) {
        j++;
    }
    return (j);
}

void create_map(char *mapchar, struct map_s *mapint, char *file)
{
    mapint->nb_col = nb_column(mapchar);
    mapint->nb_line = my_getnbr(mapchar);
    mapint->len = fd_size(file);
    mapint->map = convert_str_to_matrice(mapchar, mapint);
}

int *convert_str_to_matrice(char *map, struct map_s *mapint)
{
    int i = 0;
    int j = 0;
    int *mat = malloc(sizeof(int) * mapint->len + 1);

    for (; i < mapint->len; i++) {
        if (map[i] == '.') {
            mat[j] = 1;
            j++;
        }
        if (map[i] == 'o') {
            mat[j] = 0;
            j++;
        }
    }
    return (mat);
}

int main(int ac, char **av)
{
    struct map_s mapint;
    char *a;

    if (ac != 2)
        return (84);
    a = read_map(av[1]);
    if (a[0] == '8' && a[1] == '4' && a[2] == '\n')
        return (84);
    init_struct(&mapint);
    create_map(a, &mapint, av[1]);
    if (wrong_line_number(a, &mapint) == 84)
        return  (84);
    if (mapint.nb_col == 1) {
        write(1, map_one_column(a, &mapint), size_final_map(a));
        return (0);
    }
    coord_bsq(biggest_square(&mapint), &mapint);
    write(1, print_final_map(a, &mapint), size_final_map(a));
    free(a);
    return (0);
}
