#include <stdio.h>
#include <sys/utsname.h>
#include "../include/system.h"
#include "../include/game.h"

int option = 0;
stats new_game;
struct utsname info;

void show_options_message(void);
void handle_options(void);

int main(void) {
    new_game = start_game();

    while (option != -1) {
        show_options_message();
        scanf("%d", &option);
        handle_options();
    }

    return 0;
}



void handle_options(void) {
    switch (option) {
        case 0:
            show_game_stats(new_game);
            break;

        case 1:
            show_system_info(&info);

            break;

        case 2:
            // Pending
            break;

        case 3:
            // Pending
            break;

        case -1:
            printf("Exiting game...\n");
            break;

        default:
            printf("Invalid option. Try again.\n");
            break;
    }
}


void show_options_message(void) {
    printf("\n=== SysWatch ===\n");
    printf("0. Show game stats\n");
    printf("1. Show system information\n");
    printf("2. Pending\n");
    printf("3. Pending\n");
    printf("-1. Exit\n");
    printf("Select an option: ");
}
git commit -m "Add system information module and translate file names into English"
