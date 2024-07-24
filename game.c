#include "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initialize_game(GameBoard* board) {
    srand(time(NULL));
    for (int i = 0; i < GRID_SIZE; ++i) {
        for (int j = 0; j < GRID_SIZE; ++j) {
            board->tiles[i][j].color = rand() % NUM_COLORS;
        }
    }
    board->score = 0;
}

void print_board(GameBoard* board) {
    const char* colors[] = {"R", "G", "B", "Y", "O"};
    for (int i = 0; i < GRID_SIZE; ++i) {
        for (int j = 0; j < GRID_SIZE; ++j) {
            printf("%s ", colors[board->tiles[i][j].color]);
        }
        printf("\n");
    }
    printf("Score: %d\n", board->score);
}

int swap_tiles(GameBoard* board, int x1, int y1, int x2, int y2) {
    if (x1 < 0 || x1 >= GRID_SIZE || y1 < 0 || y1 >= GRID_SIZE ||
        x2 < 0 || x2 >= GRID_SIZE || y2 < 0 || y2 >= GRID_SIZE) {
        return 0; // Invalid swap
    }

    Tile temp = board->tiles[x1][y1];
    board->tiles[x1][y1] = board->tiles[x2][y2];
    board->tiles[x2][y2] = temp;
    return 1; // Successful swap
}

int check_matches(GameBoard* board) {
    int matches = 0;
    
    // Horizontal matches
    for (int i = 0; i < GRID_SIZE; ++i) {
        for (int j = 0; j < GRID_SIZE - 2; ++j) {
            if (board->tiles[i][j].color == board->tiles[i][j+1].color &&
                board->tiles[i][j].color == board->tiles[i][j+2].color) {
                matches += 3;
                board->tiles[i][j].color = rand() % NUM_COLORS;
                board->tiles[i][j+1].color = rand() % NUM_COLORS;
                board->tiles[i][j+2].color = rand() % NUM_COLORS;
            }
        }
    }

    // Vertical matches
    for (int j = 0; j < GRID_SIZE; ++j) {
        for (int i = 0; i < GRID_SIZE - 2; ++i) {
            if (board->tiles[i][j].color == board->tiles[i+1][j].color &&
                board->tiles[i][j].color == board->tiles[i+2][j].color) {
                matches += 3;
                board->tiles[i][j].color = rand() % NUM_COLORS;
                board->tiles[i+1][j].color = rand() % NUM_COLORS;
                board->tiles[i+2][j].color = rand() % NUM_COLORS;
            }
        }
    }

    board->score += matches;
    return matches;
}

void update_board(GameBoard* board) {
    // Implement board update logic if needed
}
