#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define elementos 10

int main()
{
    int posicao, vetor[elementos], maior = 0;
    for (posicao = 0; posicao < elementos; posicao++)
    {
        vetor[posicao] = posicao;
    }
    printf("O vetor criado contem os seguintes elementos: \n\n");
    for (posicao = 0; posicao < elementos; posicao++)
    {
        printf("%d | ", vetor[posicao]);
    }
    printf("\n\nExibindo ao contrario, os elementos do vetor são: \n\n");
    for (posicao = 9; posicao >= 0; posicao--)
    {
        printf("%d | ", vetor[posicao]);
    }
    printf("\n\nOs elementos pares do vetor são: \n\n|");
    for (posicao = 0; posicao < elementos; posicao++)
    {
        if (vetor[posicao] % 2 == 0)
        {
            printf("%d | ", vetor[posicao]);
        }
    }
    printf("\n\nO maior elemento do vetor é: | ");
    for (posicao = 0; posicao < elementos; posicao++)
    {
        if (vetor[posicao] > maior)
        {
            maior = vetor[posicao];
            printf("%d | ", maior);
        }
    }
}