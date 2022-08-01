/*
** EPITECH PROJECT, 2021
** B-CPE-110-STG-1-1-BSQ-tristan.distretti
** File description:
** functions
*/

#include "include/my.h"
#include "include/list.h"

int compare_square(int a, int b, int c)
{
    int x = 0;

    (a == b) ? x = a : 0;
    (b == c) ? x = b : 0;
    (c == a) ? x = c : 0;
    if (a < b && a < c)
        x = a;
    if (b < a && b < c)
        x = b;
    if (c < a && c < b)
        x = c;
    return (x);
}

off_t fd_size(char *file)
{
    int fd = open(file, O_RDONLY);

    struct stat buffer;

    stat(file, &buffer);
    int len = buffer.st_size;
    close(fd);
    return (len);
}

int *biggest_square(struct map_s *mapint)
{
    int i = 0;
    int *map = mapint->map;
    int all_len = mapint->nb_col * mapint->nb_line;
    int k = 1;
    for (; i < all_len; i++) {
        if (i < mapint->nb_col || map[i] == 0 || i == k * mapint->nb_col + 1);
        else if (map[i] > 0) {
            map[i] = 1 + compare_square(map[i - 1],
            map[i - (mapint->nb_col)], map[i - (mapint->nb_col + 1)]);
        }
    }
    return (map);
}

int coord_bsq(int *map, struct map_s *mapint)
{
    int k = 1;
    int i = 0;
    int len = mapint->nb_col * mapint->nb_line;
    for (; i < len; i++) {
        if (i == k * mapint->nb_col + 1) {
            mapint->mul_k = k;
            k++;
        }
        if (map[i] > mapint->max_size) {
            mapint->max_size = map[i];
            mapint->max_coord = i + mapint->mul_k - 1;
        }
    }
    return (mapint->max_coord);
}

char *print_final_map(char *map1, struct map_s *mapint)
{
    int coords = mapint->max_coord + 1;
    int len_special = strlen_special(map1) + 1;
    char *map = map1;
    map = &map[len_special];

    for (int i = 0; i < mapint->max_size; i++) {
        map[coords - i] = 'x';
        for (int k = 1; k < mapint->max_size; k++) {
            map[coords - ((mapint->nb_col + 1) * k) - i] = 'x';
        }
    }
    return (map);
}
