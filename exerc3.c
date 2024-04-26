#include <stdio.h>
#include <stdlib.h>

void strlen(char texto){
  int i, qntdCarac;
  for (i = 0; i < 60; i++){
	if (texto[i] != "\0"){
		qntdCarac++;
	}
  }
  printf("O texto: %s tem %i caracteres.", texto, qntdCarac);
  return;
}

int main (void){

  char texto[60];

  printf("Digite uma palavra: ");
  scanf("%s", texto[60]);

  strlen(texto);

  return 0;
}