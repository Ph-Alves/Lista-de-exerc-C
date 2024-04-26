#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main (void){

  int n, invert, i;

  printf("Digite um numero: ");
  scanf("%i", &n);
  
  printf("Numero invertido: ");
  for (i = 0; i < 5; i++){
	invert = n % 10;
	printf("%i", invert);
	n /= 10;
  }

  return 0;
}
