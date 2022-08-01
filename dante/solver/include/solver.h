/*
** EPITECH PROJECT, 2022
** B-CPE-200-STG-2-1-dante-thomas.decaudain
** File description:
** dante
*/

#ifndef DANTE_H_
    #define DANTE_H_
    #include "my.h"

    typedef struct pos_s {
        int line;
        int col;
    } pos_t;

    typedef struct global_s {
        char *map;
        char **tab;
        int nbwords;
        int **matrix;
        int **sol;
        pos_t *p;
        int len;
        int max;
    } global_t;

    int fill_map(int ac, char **av, global_t *global);
    void check_map(global_t *global);
    void free_global(global_t *global, int status);
    void init_matrix(global_t *global);
    int solver(global_t *global);
    void change_tab(global_t *global);
#endif /* !DANTE_H_ */
