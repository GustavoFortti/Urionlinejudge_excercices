#include <stdio.h>

int main()
{
    int x, y, z, w;
    scanf("%i %i %i %i", &x, &y, &z, &w);

    int DIFERENCA = (x * y) - ( z * w);

    printf("DIFERENCA = %i\n", DIFERENCA);

    return 0;
}