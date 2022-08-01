/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** my_strcat
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    for (int i = 0; src[i] != '\0'; i++) {
        dest[my_strlen(dest)] = src[i];
    }
    dest[my_strlen(dest)] = '\0';
    return (dest);
}
