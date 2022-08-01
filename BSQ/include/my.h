/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** include
*/


#ifndef MY_H
    #define MY_H
    #include <stddef.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <errno.h>
    #include <string.h>
    #include <stdio.h>
    #include <dirent.h>
    #include "list.h"

    int my_strlen(char *str);
    int my_getnbr(char const *str);
    int my_put_nbr(int nb);
    void my_putchar(char c);
    int my_putstr(char const *str);
    int nb_columns(char *map);
    int nb_line(char *map);
    int size_fd(char *file);
    char *read_map(char *file);
    int *convert_str_to_matrice(char *map, map_t *mapint);
    void create_map(char *mapchar, map_t *mapint, char *file);
    int *biggest_square(map_t *mapint);
    off_t fd_size(char *file);
    int compare_square(int a, int b, int c);
    int coord_bsq(int *map, map_t *mapint);
    char *print_final_map(char *map, map_t *mapint);
    void init_struct(struct map_s *mapint);
    int size_final_map(char *map);
    int strlen_special(char *map);
    int wrong_line_number(char *file, map_t *mapint);
    char *map_one_column(char *map, map_t *mapint);
#endif /* !MY_H */
