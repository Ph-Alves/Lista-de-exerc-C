#include <stdio.h>

#define SIZE 3

void inicializarTabuleiro(char tabuleiro[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

void exibirTabuleiro(char tabuleiro[][SIZE]) {
    printf("\n  0 1 2\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%i ", i);
        for (int j = 0; j < SIZE; j++) {
            printf("%c", tabuleiro[i][j]);
            if (j < SIZE - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < SIZE - 1) {
            printf("  -----\n");
        }
    }
}

int main() {
    char tabuleiro[SIZE][SIZE];

    inicializarTabuleiro(tabuleiro);
    exibirTabuleiro(tabuleiro);

    return 0;
}