#include <stdio.h>

// Aquecimento
// imprimir 10 linhas, de 1 a 10, cada uma com os numeros de um ao numero da linha

void main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}