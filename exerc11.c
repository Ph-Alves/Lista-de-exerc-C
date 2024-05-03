#include <stdio.h>

typedef struct {
    int hora;
    int minutos;
    int segundos;
}data;

int main() {
    data horario = {10, 30, 45};

    printf("Digite uma hora: ");
    scanf("%i", &horario.hora);
    printf("Digite os minuto: ");
    scanf("%i", &horario.minutos);
    printf("Digite os segundos: ");
    scanf("%i", &horario.segundos);

    printf("%02d:%02d:%02d\n", horario.hora, horario.minutos, horario.segundos);

    return 0;
}