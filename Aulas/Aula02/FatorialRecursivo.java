package Aulas.Aula02;

import java.util.Scanner;

public class FatorialRecursivo {
  public static int fatorial(int n) {
    if (n > 0) {
      return n * FatorialRecursivo.fatorial(n - 1);
    }
    return 1;
  }

  public static void main(String[] args) {
    System.out.println("Valor: ");
    Scanner scan = new Scanner(System.in);
    int valor = scan.nextInt();
    System.out.println("O fatorial de " + valor + ": " + FatorialRecursivo.fatorial(valor));
    scan.close();
  }
}
