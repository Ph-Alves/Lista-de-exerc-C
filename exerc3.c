#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comprChar(char s[60]){
  int tamanho = 0;
  while (s[tamanho] != '\0'){
	tamanho++;
  }
  tamanho--;
  return tamanho;
}


int main (void){

  char s[60];

  printf("Digite uma palavra: ");
  fflush(stdin);
  fgets(s, sizeof(s), stdin);

  int tamanho = comprChar(s);

  printf("essa palavra tem %i caracteres!", tamanho);

  return 0;
}