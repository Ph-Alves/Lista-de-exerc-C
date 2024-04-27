#include <stdio.h>
#include <stdlib.h>

int charTexto(char texto[]){
  int tamanho = 0;
  while (texto[tamanho] != '\0'){
	tamanho++;
  }
  return tamanho;
}


int main (void){

  char texto[60];

  printf("Digite uma palavra: ");
  scanf("%s", texto[60]);

  int tamanho = charTexto(texto);

  printf("O texto: %s tem %i caracteres.", texto, tamanho);

  return 0;
}