/*
Trabalho de introducao a programacao.
Essa e uma implementacao do jogo tic tac chess, que pode ser jogado no terminal 
por dois jogadores ou contra o computador.

Sofia Sampaio Lacerda
12611776

Ana Julia Funchal Lopes
12717440
*/
#include <stdlib.h>
#include <stdio.h>

void printboard(char board[3][3]) {
	printf("+---+\n");
	printf("|%c%c%c|\n", board[0][0], board[0][1], board[0][2]);
	printf("|%c%c%c|\n", board[1][0], board[1][1], board[1][2]);
	printf("|%c%c%c|\n", board[2][0], board[1][1], board[2][2]);
	printf("+---+\n");
	return;
}

int main(void) {
	char board[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
	for(int i = 0; ; ++i) {
		printboard(board);
		if(i % 2 == 0) {
			printf("vez do jogador 1 (pecas brancas)\n");
		} else {
			printf("vez do jogador 2 (pecas pretas)\n");
		}
		char move[4];
		scanf("%s", move);
		int row = move[2] - 49;
		int column = move[1] - 97;
		//int column = atoi(&move[1]);
		//printf("%d, %d\n", row, column);
		board[row][column] = move[0];
	}
	return 0;
}
