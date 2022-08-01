/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** my putstr
*/

#include "../../include/my.h"

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; my_putchar(str[i]), i++);
}
