/*
** EPITECH PROJECT, 2021
** B-CPE-110-STG-1-1-BSQ-tristan.distretti
** File description:
** list
*/

#ifndef LIST_H_
    #define LIST_H_

    typedef struct map_s {
        int *map;
        int nb_col;
        int nb_line;
        int len;
        int max_size;
        int max_coord;
        int mul_k;
    }map_t;

    typedef struct coords_s {
        int size;
        int x;
        int y;
    }coord_t;

#endif /* !LIST_H_ */
