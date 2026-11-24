#include <stdio.h>
#include "../include/game.h"

stats start_game(void){
    stats new_game;
    new_game.lives = 3;
    new_game.cash = 0;
    new_game.turn = 0;
    return new_game;
}


void show_game_stats(stats game_data) {
    printf("You have %d lives remaining.\n", game_data.lives);
    printf("You have $%d.\n", game_data.cash);
    printf("Current turn: %d\n", game_data.turn);
}
