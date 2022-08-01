/*
** EPITECH PROJECT, 2021
** B-CPE-110-STG-1-1-BSQ-tristan.distretti
** File description:
** complete
*/

#include "include/my.h"
#include "include/list.h"

void init_struct(struct map_s *mapint)
{
    mapint->nb_col = 0;
    mapint->nb_line = 0;
    mapint->len = 0;
    mapint->map = 0;
    mapint->max_size = 0;
}

int size_final_map(char *map)
{
    int i = 0;
    int j = 0;

    for (; *map != '\n'; map += 1);
    map += 1;
    j = my_strlen(map);
    return (j);
}

int strlen_special(char *map)
{
    int i = 0;

    for (; map[i] != '\n'; i++);
    return (i);
}
