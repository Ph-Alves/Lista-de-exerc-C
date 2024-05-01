#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strins(char palavra[60], char letra, int pos) {
    int tamanho = strlen(palavra);

    if (pos >= tamanho) {
        palavra[tamanho] = letra;
        palavra[tamanho + 1] = '\0'; // Adiciona o terminador de string
    } else {
        for (int i = tamanho; i >= pos; i--) {
            palavra[i + 1] = palavra[i];
        }
        palavra[pos] = letra;
    }
}

int main (void){

  char palavra[60];

  printf("Digite uma palavra: ");
  fgets(palavra, sizeof(palavra), stdin);
  fflush(stdin);

  char letra;

  printf("Digite a letra que quer inserir na palavra: ");
  scanf("%c", &letra);
  fflush(stdin);

  int pos;

  printf("Digite a posicao da palavra que quer inserir a letra: ");
  scanf("%i", &pos);

  strins(palavra, letra, pos);

  printf("A a palavra depois de inserir a letra fica: %s", palavra);
 
  return 0;
}