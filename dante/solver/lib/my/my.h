/*
** EPITECH PROJECT, 2021
** B-CPE-110-STG-1-1-pushswap-tristan.distretti
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    int my_compute_power_rec(int nb, int p);

    int my_compute_square_root(int nb);

    int my_find_prime_sup(int nb);

    int my_getnbr(char const *str);

    int my_is_prime(int nb);

    int my_isneg(int n);

    int my_print_alpha(void);

    int print_comb(int i, int j);

    int print_comb1(int a, int b);

    int my_print_digits(void);

    int my_print_revalpha(void);

    int my_put_nbr(int nb);

    void my_putchar(char c);

    int my_putstr(char const *str);

    char *my_revstr(char *str);

    int my_showmem(char const *str, int size);

    int my_showstr(char const *str);

    void my_sort_int_array(int *tab, int size);

    int my_str_isalpha(char const *str);

    int my_str_islower(char const *str);

    int my_str_isnum(char const *str);

    int my_str_isprintable(char const *str, int size);

    int my_str_isupper(char const *str);

    char *my_strcapitalize(char *str);

    char *my_strcat(char *dest, char const *src);

    int my_strcmp(char const *s1, char const *s2);

    int my_strlen(char *str);

    char **my_str_to_word_arr(char *str);

    char *my_strdup(char const *str);

    char **my_str_to_word_arr_spe(char *str, char c);

#endif /* !MY_H_ */
