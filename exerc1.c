#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main (void){

  int n;
  char num_invert[20];

  printf("Digite um número: ");
  scanf("%i", &n);
 
  sprintf(num_invert, "%i", n);

  printf("O número invertido é: %s", num_invert);

  return 0;
}
