/*
** EPITECH PROJECT, 2022
** test_dante
** File description:
** my_putchar
*/

#include <unistd.h>

void my_putchar(char a)
{
    write(1, &a, 1);
}
