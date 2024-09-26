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
        if (readed == ';')
        {
            printf("%d ", countNumbers);
            countNumbers = 0;
        }
        else if (readed == ' ' || readed == '\t' || readed == '\n')
        {
            countLines += (readed == '\n');
            if (!isAfterSpace)
            {
                isAfterSpace = 1;
            }
        }
        else
        {
            if (isAfterSpace)
            {
                countNumbers++;
            }
            isAfterSpace = 0;
        }
    }

    printf("\nTotal lines: %d\n", countLines);
}