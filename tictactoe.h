//
// Created by crispin on 12/09/18.
//

#include <stdlib.h>
#include <string.h>

#ifndef TICTACTOE_GBOARD_H
#define TICTACTOE_GBOARD_H

#endif //TICTACTOE_TICTACTOE_H

typedef struct board{
    char game[3][3]; //1 for Player 1 and 2 for Player 2 and 0 for empty slot
    int play;
}Board;

Board create_board();//Returns a Board type with a clear matrix

Board play_on(Board p, int x, int y, int player);//Player 1(x) or 0(o)

int won(Board p);//Returns 1 when won someone won

char who_won(Board p);//Returns 1 or 2 if someone won or 0 when the game is not finished


