#include <stdio.h>
#include "../include/partida.h"
// We need execute

stats start_game(){
    stats new_game;
    new_game.lives = 3;
    new_game.cash = 0;
    new_game.turn = 0;
    return new_game;
}


void show_stats(stats game_data) {
    printf("You have %d live rest\n", game_data.lives);
    printf("You have %d$\n", game_data.cash);
    printf("You are in the turn: %d\n", game_data.turn);
}


int main(void) {
    stats partida1 = start_game();
    show_stats(partida1);

    return 0;
}
