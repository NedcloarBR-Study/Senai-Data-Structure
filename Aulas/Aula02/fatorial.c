#include <stdio.h>
#include <conio.h>

double fatorial(int n);

int main() {
  int numero;
  double f;

  printf("Digite o número que deseja calcular o fatorial: ");
  scanf("%d", &numero);
  f = fatorial(numero);
  printf("Fatorial de %d = %.0lf\n", numero, f);
  getch();
  return 0;
}

double fatorial(int n) {
  double vfat;

  if(n<=1)
  return(1);
  else {
    vfat = n * fatorial(n-1);
    return(vfat);
  }
}