#include <stdio.h>

// TASK 2
// imprimir quantos numeros existem em cada linha logica terminada por ;
// arquivo in2.txt
// resposta: 1 1 1 3 12 3 5 2 1 2 1 4 2 2 2 3 3 1
void main()
{
    FILE *in2 = fopen("in2.txt", "r");
    int count = 0;
    int isAfterSpace = 1;
    char readed;

    while ((readed = fgetc(in2)) != EOF)
    {
        switch (readed)
        {
        case ';':
            printf("%d ", count);
            count = 0;
            break;

        case ' ':
        case '\n':
        case '\t':
            if (isAfterSpace)
            {
                continue;
            }
            isAfterSpace = 1;
            break;

        default:
            if (isAfterSpace)
            {
                count++;
            }
            isAfterSpace = 0;
            break;
        }
    }

    printf("\n");
}