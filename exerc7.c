#include <stdio.h>
#include <stdlib.h>

void strdel(char palavra[60], char letra) {
  int i = 0;
  while (palavra[i] != '\0') {
        if (palavra[i] == letra) {
            for (int j = i; palavra[j] != '\0'; j++) {
                palavra[j] = palavra[j + 1];
            }
            return;
        }
        i++;
    }
}

int main (void){

  char palavra[60];

  printf("Digite uma palavra: ");
  fgets(palavra, sizeof(palavra), stdin);
  fflush(stdin);

  char letra;

  printf("Digite a letra que quer apagar da palavra: ");
  scanf("%c", &letra);
  fflush(stdin);
  
  printf("Teste: %c\n", letra);
  printf("Teste: %s\n", palavra);

  strdel(palavra, letra);

  printf("A a palavra depois de apagada fica: %s", palavra);
 
  return 0;
}