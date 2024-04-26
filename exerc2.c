#include <stdio.h>
#include <stdlib.h>

void linha(int qntdLinhas){
  int i;
  for (i = 0; i < qntdLinhas; i++){
	printf("=");
  }
  printf("\n");
  return;
}

void histograma(int t[], char dias[][7]){
  int i;
  for (i = 0; i < 7; i++){
	printf("%iC %s : ", t[i], dias[i]);
	linha(t[i]);
	printf("\n");
  }
  return;
}


int main (void){
  
  int t[7], i;
  char dias[60][7] = {"D", "S", "T", "Q", "Q", "S", "S"};

  printf("Digite as temperaturas da semana: \n");
  for (i = 0; i < 7; i++){
	printf("%s: ", dias[i]);
	scanf("%i", &t[i]);
  }
  
  system("cls");
  histograma(t, dias);


  return 0;
}