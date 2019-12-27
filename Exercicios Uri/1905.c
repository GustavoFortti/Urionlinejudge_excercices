#include <stdio.h>
#include <stdbool.h>
#define size 5

void walk(int m[size][size], int j, int k);

int win = 0;

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
                scanf("%i", &m[j][k]);
            }
        }
        k = 0;
        j = 0;

        walk(m, j, k);

        if ( win == 1)
        {
            printf("COPS\n");
        }
        else
        {
            printf("ROBBERS\n");
        }
        win = 0;
    }
    return 0;
}


void walk(int m[size][size], int j, int k)
{
    if ( win == 0 && m[0][0] >= -2)
    {
        int x = 0, y = 0, z = 0, w = 0;
        m[j][k]--;
    
        if ( j == 4 && k == 4)
        {
            win = 1;
        }
        else
        { 
            if ( j < size && k < size && j >= 0 && k >= 0)
            {
                for ( x = m[j+1][k], y = m[j-1][k], z = m[j][k+1], w = m[j][k-1]; x <= 0 || y <= 0 || z <= 0 || w <= 0; x++, y++, z++, w++)
                {
                    if ( x == 0 && j + 1 < size)
                    {
                        walk(m, j+1, k);
                    }
                    if ( y == 0 && j - 1 >= 0)
                    {
                        walk(m, j-1, k);
                    }
                    if ( z == 0 && k + 1 < size)
                    {
                        walk(m, j, k+1);
                    }
                    if ( w == 0 && k - 1 >= 0)
                    {
                        walk(m, j, k-1);
                    }
                }
            }
        }
    }
}

