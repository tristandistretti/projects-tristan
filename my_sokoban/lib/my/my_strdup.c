/*
** EPITECH PROJECT, 2022
** B-PSU-101-STG-1-1-minishell1-tristan.distretti
** File description:
** my_strdup
*/

#include "../../include/my.h"

int my_strlen(char *str);

char *my_strdup(char *src)
{
    int i;
    char *str;

    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    for (i = 0; i < my_strlen(src); i++)
        str[i] = src[i];
    str[i] = '\0';
    return (str);
}
