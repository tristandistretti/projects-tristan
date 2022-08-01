/*
** EPITECH PROJECT, 2021
** my_putnbr_base.c
** File description:
** my putnbr base
*/

void my_putchar(char c);

int my_strlen(char const *str);

int my_putnbr_base(int nb, char const *base)
{
    int b = my_strlen(base);

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb > b - 1) {
        my_putnbr_base(nb / b, base);
    }
    my_putchar(base[nb % b]);
    return (0);
}
