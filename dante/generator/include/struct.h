/*
** EPITECH PROJECT, 2022
** init
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct generator_s {
        char **tab;
        int **matrix;
        bool is_finished;
        int height;
        int width;
    } generator_t;

#endif /* !STRUCT_H_ */
