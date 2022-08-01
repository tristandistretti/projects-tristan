/*
** EPITECH PROJECT, 2022
** dante
** File description:
** generator
*/

#ifndef GENERATOR_H_
    #define GENERATOR_H_

    #include <stdbool.h>
    #include <time.h>
    #include <stdlib.h>
    #include "struct.h"
    #include "my.h"

    void error_handling(int ac, char **av);
    generator_t *init_gen(int ac, char **av);
    void path(generator_t *gen);
    void init_maze(generator_t *gen);
    void fill_maze(generator_t *gen);

#endif /* !GENERATOR_H_ */
