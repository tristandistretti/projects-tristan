/*
** EPITECH PROJECT, 2021
** B-CPE-110-STG-1-1-BSQ-tristan.distretti
** File description:
** handling_error
*/

#include "include/my.h"

int wrong_line_number(char *file, map_t *mapint)
{
    int j = 0;

    for (; *file != '\n'; file += 1);
    file += 1;
    for (int i = 0; file[i] != '\0'; i++) {
        if (file[i] == '\n')
            j++;
    }
    if (mapint->nb_line != j)
        return (84);
}

char *map_one_column(char *map, map_t *mapint)
{
    for (; *map != '\n'; map += 1);
    map += 1;
    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == '.') {
            map[i] = 'x';
            return (map);
        }
        if (map[i] == 'o')
            map[i] = 'o';
    }
    return (map);
}