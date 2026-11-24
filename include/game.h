#ifndef GAME_H
#define GAME_H

typedef struct {
    int lives;
    int cash;
    int turn;

} stats;

stats start_game(void);
void show_game_stats(stats game_data);

#endif
