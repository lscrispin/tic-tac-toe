//
// Created by crispin on 12/09/18.
//

#include "tictactoe.h"

Board create_board(){
    Board new;
    for(int i = 0; i < 3; i++ ){
        for(int j = 0; j < 3; j++){
            new.game[i][j] = ' ';
        }
    }
    new.play = 0;
    return new;
}

Board play_on(Board p, int x, int y, int player){
    if(p.game[x-1][y-1] != ' ') return p;
    if(player == 1) p.game[x - 1][y - 1] = 'x';
    else if(player == 0) p.game[x - 1][y - 1] = 'o';
    p.play += 1;
    return p;
}

int won(Board p){
    if(p.game[0][0] != ' ' && ((p.game[0][0] == p.game[0][1]) && (p.game[0][0] == p.game[0][2]))) return 1;
    else if(p.game[1][0] != ' ' && ((p.game[1][0] == p.game[1][1]) && (p.game[1][0] == p.game[1][2]))) return 1;
    else if(p.game[2][0] != ' ' && ((p.game[2][0] == p.game[2][1]) && (p.game[2][0] == p.game[2][2]))) return 1;
    else if(p.game[0][0] != ' ' && ((p.game[0][0] == p.game[1][0]) && (p.game[0][0] == p.game[2][0]))) return 1;
    else if(p.game[0][1] != ' ' && ((p.game[0][1] == p.game[1][1]) && (p.game[0][1] == p.game[2][1]))) return 1;
    else if(p.game[0][2] != ' ' && ((p.game[0][2] == p.game[1][2]) && (p.game[0][2] == p.game[2][2]))) return 1;
    else if(p.game[0][0] != ' ' && ((p.game[0][0] == p.game[1][1]) && (p.game[0][0] == p.game[2][2]))) return 1;
    else if(p.game[0][2] != ' ' && ((p.game[0][2] == p.game[1][1]) && (p.game[0][2] == p.game[2][0]))) return 1;
    return 0;
}

char who_won(Board p){
    if(won(p)){
        if(p.game[0][0] != ' ' && ((p.game[0][0] == p.game[0][1]) && (p.game[0][0] == p.game[0][2]))) return p.game[0][0];
        else if(p.game[1][0] != ' ' && ((p.game[1][0] == p.game[1][1]) && (p.game[1][0] == p.game[1][2]))) return p.game[1][0];
        else if(p.game[2][0] != ' ' && ((p.game[2][0] == p.game[2][1]) && (p.game[2][0] == p.game[2][2]))) return p.game[2][0];
        else if(p.game[0][0] != ' ' && ((p.game[0][0] == p.game[1][0]) && (p.game[0][0] == p.game[2][0]))) return p.game[0][0];
        else if(p.game[0][1] != ' ' && ((p.game[0][1] == p.game[1][1]) && (p.game[0][1] == p.game[2][1]))) return p.game[0][1];
        else if(p.game[0][2] != ' ' && ((p.game[0][2] == p.game[1][2]) && (p.game[0][2] == p.game[2][2]))) return p.game[0][2];
        else if(p.game[0][0] != ' ' && ((p.game[0][0] == p.game[1][1]) && (p.game[0][0] == p.game[2][2]))) return p.game[0][0];
        else if(p.game[0][2] != ' ' && ((p.game[0][2] == p.game[1][1]) && (p.game[0][2] == p.game[2][0]))) return p.game[0][2];
    }else return 0;
}