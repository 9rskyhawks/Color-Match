#include "game.h"
#include <stdio.h>

int main() {
    GameBoard board;
    initialize_game(&board);

    int x1, y1, x2, y2;
    while (1) {
        print_board(&board);
        printf("Enter coordinates of tiles to swap (x1 y1 x2 y2): ");
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        if (swap_tiles(&board, x1, y1, x2, y2)) {
            if (check_matches(&board) > 0) {
                update_board(&board);
            } else {
                // Swap back if no matches are found
                swap_tiles(&board, x1, y1, x2, y2);
            }
        } else {
            printf("Invalid swap. Try again.\n");
        }
    }

    return 0;
}
