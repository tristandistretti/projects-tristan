/*
** EPITECH PROJECT, 2022
** B-PSU-101-STG-1-1-minishell1-tristan.distretti
** File description:
** my_strlen
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}
