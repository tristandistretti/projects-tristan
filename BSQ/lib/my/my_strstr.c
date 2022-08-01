/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** my_strstr
*/

int check(char *str, char const *to_find, int i, int *index)
{
    int j = 0;

    if (str[i] == to_find[0])
        *index = i;
    while (to_find[j]) {
        if (str[i] != to_find[j]) {
            *index = 0;
            return (0);
        }
        i++;
        j++;
    }
    return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    int index = 0;

    for (int i = 0; str[i]; i++) {
        if (check(str, to_find, i, &index) == 1)
            return (&str[index]);
    }
    return ("");
}
