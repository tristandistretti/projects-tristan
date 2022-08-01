/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday07-thomas.decaudain
** File description:
** my_lib.h
*/

#ifndef _MY_H_
    #define _MY_H_

    #define true 1
    #define false 0

    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/stat.h>
    #include <sys/fcntl.h>

    void my_putchar(char c);
    int my_strlen(char const *str);
    int my_getnbr(char const *str);
    int my_strcmp(char const *s1, char const *s2);
    int my_strncmp(char const *s1, char const *s2, int n);

#endif /*_MY_H_*/
