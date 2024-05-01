#include <stdio.h>
#include <stdlib.h>

int strpos (char palavra[60], char letra){
  	int i = 0;
	while (palavra[i] != '\0'){
		if (palavra[i] == letra){
			return i;
		}
		i++;
	}
	return -1;
}

int main (void){

  char palavra[60];

  printf("Digite uma palavra: ");
  fgets(palavra, sizeof(palavra), stdin);
  fflush(stdin);

  char letra;

  printf("Digite a letra que quer encontrar a primeira ocorrencia na palavra: ");
  scanf("%c", &letra);
  fflush(stdin);
  
  printf("Teste: %c\n", letra);
  printf("Teste: %s\n", palavra);

  int pos = strpos(palavra, letra);

  if (pos != -1) {
        printf("A primeira ocorrencia da letra %c esta na posicao: %i", letra, pos);
  } else {
        printf("A letra = %c nao foi encontrada na palavra.", letra);
  }
 
  return 0;
}