/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** my getnbr
*/

#include "../../include/my.h"

int my_getnbr(char const *str)
{
    long a = 0;
    int pos = 1;
    long intmax = 2147483647;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-')
            pos = pos * -1;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > 47 && str[i] < 58) {
            a = a * 10 + (str[i] - 48);
        }
    }
    a = a * pos;
    if (a > intmax)
        return (0);
    if (a < -intmax)
        return (0);
    return (a);
}
