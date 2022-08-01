/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    long a = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            sign = sign * -1;
        }
        i++;
    }
    while (str[i] <= '9' && str[i] >= '0') {
        a = a * 10 + (str[i] - 48);
        i++;
    }
    if (a == 0)
        return (a);
    a = a * sign;
    if (a > 2147483647 || a < - 2147483647)
        return (0);
    return (a);
}
