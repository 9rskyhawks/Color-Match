#ifndef GAME_H
#define GAME_H

#define GRID_SIZE 8

typedef enum {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE,
    NUM_COLORS
} TileColor;

typedef struct {
    TileColor color;
} Tile;

typedef struct {
    Tile tiles[GRID_SIZE][GRID_SIZE];
    int score;
} GameBoard;

void initialize_game(GameBoard* board);
void print_board(GameBoard* board);
int swap_tiles(GameBoard* board, int x1, int y1, int x2, int y2);
int check_matches(GameBoard* board);
void update_board(GameBoard* board);

#endif // GAME_H
