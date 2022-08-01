/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_

    #include <ncurses.h>
    #include <stdlib.h>
    #include <signal.h>

    typedef struct pos_s {
        int line;
        int col;
    } pos_t;

    typedef struct global_s {
        char *map;
        char **tab;
        pos_t **pos_o;
        pos_t *pos_p;
        int nb_words;
        int nb_o;
        int lose_count;
        int last_coord_x;
        int last_coord_y;
    } global_t;

    void controls(global_t *global, int gch);
    void go_right(global_t *global);
    void define_pos(global_t *global, char c, int i, int j);
    void find_player(global_t *global);
    int start(global_t *global);
    void check_size(int len, int nb_words);
    void check_map(global_t *);
    void game(global_t *);
    int fill_map(int ac, char **av, global_t *global);
    int nb_of_x_o(char *map, char lim);
    void fill_pos_o(global_t *global);
    int fill_pos_o_two(global_t *global, int line, int nb_o);
    int check_o(global_t *global);
    void move_right(global_t *global);
    void move_down(global_t *global);
    void move_up(global_t *global);
    void move_left(global_t *global);
    void left_x(global_t *global);
    void right_x(global_t *global);
    void up_x(global_t *global);
    void down_x(global_t *global);
    void check_win(global_t *global);
    void lose_cond(global_t *global);
    int check_near(global_t *global, int lin, int col);
    int count_neighbors(global_t *global, int lin, int col);
    void check_player(global_t *global);
    void help(void);
#endif /* !SOKOBAN_H_ */
