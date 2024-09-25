#include <stdio.h>

// TASK 1
// contar quantos numeros existem
// arquivo in1.txt
// resposta: 33
void main()
{
    FILE *f;
    int n, count = 0;

    f = fopen("in1.txt", "r");
    while (fscanf(f, "%d", &n) != EOF)
    {
        count++;
    }

    fclose(f);
    printf("%d\n", count);
}