#ifndef PARTIDA_H
#define PARTIDA_H

typedef struct {
    int lives;
    int cash;
    int turn;

} stats;

stats start_game(void);
void show_stats(stats game_data);

#endif
