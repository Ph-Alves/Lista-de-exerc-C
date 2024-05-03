#include <stdio.h>
#include <string.h>

#define maxSize 60

void criarMat(int matriz[][maxSize], int n){
  
  for (int i = 0; i < n; i++){
	for (int j = 0; j < n; j++){
		printf("Linha %i, Coluna %i: ", i, j);
		scanf("%i", &matriz[i][j]);
	}
  }
  return;
}

void printDiag(int matriz[][maxSize], int n){

  printf("Elementos da diagonal principal: \n");
  for (int i = 0; i < n; i++){
	printf("%i , ", matriz[i][i]);
  }
  return;
}

int main() {
  
  int n;    

  printf("Digite a ordem da matriz que sera criada: ");
  scanf("%i", &n);

  int matriz[n][n];

  criarMat(matriz, n);
  printDiag(matriz, n);

  return 0;
}