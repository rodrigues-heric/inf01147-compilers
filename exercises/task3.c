#include <stdio.h>

// TASK 3
// Fazer a tarefa 2 contando o numero de linhas fisicas no mesmo arquivo in2.txt
void main()
{
    FILE *in2 = fopen("in2.txt", "r");
    int countNumbers = 0;
    int countLines = 1;
    int isAfterSpace = 1;
    char readed;

    while ((readed = fgetc(in2)) != EOF)
    {
        switch (readed)
        {
        case ';':
            printf("%d ", countNumbers);
            countNumbers = 0;
            break;

        case ' ':
        case '\t':
        case '\n':
            if (readed == '\n')
            {
                countLines++;
            }

            if (isAfterSpace)
            {
                continue;
            }

            isAfterSpace = 1;
            break;

        default:
            if (isAfterSpace)
            {
                countNumbers++;
            }
            isAfterSpace = 0;
            break;
        }
    }

    printf("\nTotal lines: %d\n", countLines);
}