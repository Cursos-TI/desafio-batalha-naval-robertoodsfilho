#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0};

    int linhaH = 1;
    for (int i = 1; i <= 3; i++) {
        tabuleiro[linhaH][i] = 1;
        printf("Navio Horizontal: (%d, %d)\n", linhaH, i);
    }

    int colunaV = 0;
    for (int i = 2; i <= 4; i++) {
        tabuleiro[i][colunaV] = 2;
        printf("Navio Vertical: (%d, %d)\n", i, colunaV);
    }

    return 0;
}
