#include <stdio.h>

typedef struct {
    char cidadeOrigem[50];
    char cidadeDestino[50];
    char dataPartida[20];
    char horarioPartida[20];
    char dataChegada[20];
    char horarioChegada[20];
}Voo;

int main(void) {

    Voo meuVoo;
    
    printf("Digite a sua cidade de origem: ");
    gets(meuVoo.cidadeOrigem);
    fflush(stdin);
    printf("Digite a sua cidade de Destino: ");
    gets(meuVoo.cidadeDestino);
    fflush(stdin);
    printf("Digite a data que prefere sair: ");
    gets(meuVoo.dataPartida);
    fflush(stdin);
    printf("Digite o horário que prefere sair: ");
    gets(meuVoo.horarioPartida);
    fflush(stdin);
    printf("Digite a data que pretende chegar: ");
    gets(meuVoo.dataChegada);
    fflush(stdin);
    printf("Digite o horário que pretende chegar: ");
    gets(meuVoo.horarioChegada);
    fflush(stdin);

    printf("\nCidade de origem: %s\n", meuVoo.cidadeOrigem);
    printf("Cidade de destino: %s\n", meuVoo.cidadeDestino);
    printf("Data de partida: %s\n", meuVoo.dataPartida);
    printf("Horário de partida: %s\n", meuVoo.horarioPartida);
    printf("Data de chegada: %s\n", meuVoo.dataChegada);
    printf("Horário de chegada: %s\n", meuVoo.horarioChegada);

    return 0;
}