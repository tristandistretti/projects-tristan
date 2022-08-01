/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** pool day10
*/

#ifndef MY_H
    #define MY_H

    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <string.h>
    #include <stdarg.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <dirent.h>
    #include <fcntl.h>

    void my_putchar(char c);
    void my_putstr(char const *str);
    int my_strcmp(char const *s1, char const *s2);
    int my_strlen(char *str);
    int my_getnbr(char const *str);
    int my_put_nbr(int nb);
    char **my_str_to_word_arr(char *str, char c);
    char *my_strdup(char *src);
    int nb_words(char *str, char c);
    int my_lim_len(char *, char delim);
#endif /*MY_H*/
