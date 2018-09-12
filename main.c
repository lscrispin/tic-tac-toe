#include <stdio.h>
#include "tictactoe.h"

void print_board(Board p){
    printf("   1 2 3\n");
    printf("1  %c|%c|%c\n", p.game[0][0], p.game[0][1], p.game[0][2]);
    printf("   -----\n");
    printf("2  %c|%c|%c\n", p.game[1][0], p.game[1][1], p.game[1][2]);
    printf("   -----\n");
    printf("3  %c|%c|%c\n", p.game[2][0], p.game[2][1], p.game[2][2]);
}

int main() {
    Board jogo = create_board();
    int x, y;

    while(!won(jogo)){
        system("clear");
        print_board(jogo);
        if(jogo.play % 2 == 0){
            printf("JOGADOR 1(X): Digite a posição da horizontal e a da vertical Ex(1 1):");
            scanf("%d %d", &x, &y);
            jogo = play_on(jogo, x, y, 1);
        }else{
            printf("JOGADOR 2(O): Digite a posição da horizontal e a da vertical Ex(1 1):");
            scanf("%d %d", &x, &y);
            jogo = play_on(jogo, x, y, 0);
        }
        if(jogo.play == 9 && !won(jogo)){
            system("clear");
            printf("EMPATE!!!");
            return 0;
        }
    }


    printf("Jogador %c ganhou em %d jogadas!\n", who_won(jogo), jogo.play);


    return 0;
}