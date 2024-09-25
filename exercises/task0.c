#include <stdio.h>

// TASK 0
// Imprimir uma funcao em C com n parametros int
void main(int argc, char **argv)
{
    int i;
    printf("void f(");

    for (i = 0; i < argc - 1; ++i)
    {
        printf("\n  int param%d,", i + 1);
    }

    printf("\n)\n{\n  return 0;\n}");
}