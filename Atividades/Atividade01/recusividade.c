#include <stdio.h>
#include <stdlib.h>

int imprime(int inicio, int limite) {
  if(inicio<=limite) {
    printf("%d\n", inicio);
    imprime(inicio+1, limite);
  }
}

int main() {
  int inicio, limite, i;

  inicio = 10;
  limite = 200;
  printf("\n\nImpressão ITERATIVA\n");
  for(i=inicio;i<limite;i++) {
    printf("%d ", i);
  }
  printf("\n\nImpressão RECURSIVA\n");
  imprime(inicio, limite);
  printf("\n\n");
  system("pause");
  return 0;
}