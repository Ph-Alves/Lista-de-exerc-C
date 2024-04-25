#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main (void){

  int n, invert, i;
  char numInvert[60];
  int multi = 10;

  printf("Digite um numero: ");
  scanf("%i", &n);
 
  invert = n % 10;
  printf("%i\n", invert);
  invert = n % 100;
  printf("%i\n", invert);
  invert = n % 1000;
  printf("%i\n", invert);
  invert = n % 10000;
  printf("%i\n", invert);
  invert = n % 100000;
  printf("%i\n", invert);
  
  for (i = 1; i <= 5; i++){
	if (i == 1){
		invert = n % multi;
		sprintf(numInvert, "%i", invert);
	}else{
		invert = n % (multi * 10);
		sprintf(numInvert, "%i", invert);
		multi *= 10;
	}
  }

  printf("%s", numInvert);

  return 0;
}
