#include <stdio.h>
#include <stdbool.h>
#define size 5

int cont = 0;

int walk(int m[size][size], int j, int k);

int main()
{
    int i, j, k, T = 0;
    int r = 0;
    int m[size][size];
    int m0[size][size];
    scanf("%i", &T);

    for ( i = 0; i < T; i++)
    {
        for ( j = 0; j < size; j++)
        {
            for ( k = 0; k < size; k++)
            {
                scanf("%i", &m0[k][j]);
                m[k][j] = m0[k][j] -2;
            }
        }
        k = 0;
        j = 0;
        
        printf("1\n");
        r = walk(m, j, k);
        printf("2\n");
        if (r == 1)
        {
            printf("COPS\n");
        }
        else
        {
            printf("ROBBERS\n");
        }
    }
    return 0;
}

int walk(int m[size][size], int j, int k)
{
    m[j][k]--;

    int a, b;
    if ( cont <= 29)
    {
        for ( a = 0; a < 5; a++)
        {
            for ( b = 0; b < 5; b++)
            {
                printf("%i ",m[a][b]);
            }
            printf("\n");
        }
        printf("\n");
    }
    cont++;

    int x = 0, y = 0, z = 0, w = 0;
    if ( j == 4 && k == 4)
    {
        printf("j = %i\n", j);
        printf(" k = %i\n", k);
        printf("----------------------entrou\n");
        return 1;
    }
    else
    {
        if (cont <= 29)
        {
            printf("coun = %i", cont);
            printf("funfou\n");
            /* code */
        }
        
    }
    for ( x = m[j+1][k], y = m[j-1][k], z = m[j][k+1], w = m[j][k-1]; x <= -2 || y <= -2 || z <= -2 || w <= -2; x++, y++, z++, w++)
    {
        if (cont <= 25)
        {
            printf("=> j = %i\n", j);
            printf("   k = %i\n", k);
            printf("   x = %i\n", x);
            printf("   y = %i\n", y);
            printf("   z = %i\n", z);
            printf("   w = %i\n\n", w);
        }
        if ( x == -2)
        {
            walk(m, j+1, k);
        }
        if ( y == -2)
        {
            walk(m, j-1, k);
        }
        if ( z == -2)
        {
            walk(m, j, k+1);
        }
        if ( w == -2)
        {
            walk(m, j, k-1);
        }
    }
    printf("R0\n");
    return 0;
}