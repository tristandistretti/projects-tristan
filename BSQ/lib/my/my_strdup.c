/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** my_strdup
*/

#include "my.h"

char *my_strdup(char *src)
{
    char *str = malloc(sizeof(char) * (my_strlen(src) + 1));

    for (int i = 0; src[i] != '\0'; i++) {
        str[i] = src[i];
    }
    str[my_strlen(str)] = '\0';
    return (str);
}
