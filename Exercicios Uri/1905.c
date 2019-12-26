#include <stdio.h>
#include <stdbool.h>
#define size 5

bool walk(int m[size][size], int j, int k)
{
    m[k][j]--;
    int x = 0, y = 0, z = 0, w = 0;

    if ( j == 4 && k == 4)
    {
        return true;
    }
    for ( x = m[j+1][k], y = m[j-1][k], z = m[j][k+1], w = m[j][k-1]; x <= 0 || y <= 0 || z <= 0 || w <= 0; x++, y++, z++, w++)
    {
        if ( x == 0)
        {
            walk(m, j+1, k);
        }
        if ( y == 0)
        {
            walk(m, j-1, k);
        }
        if ( z == 0)
        {
            walk(m, j, k+1);
        }
        if ( w == 0)
        {
            walk(m, j, k-1);
        }
    }
    return false;
}

int main()
{
    int i, j, k, T = 0;
    bool r;
    int m[size][size];
    scanf("%i", &T);

    for ( i = 0; i < T; i++)
    {
        for ( j = 0; j < size; j++)
        {
            for ( k = 0; k < size; k++)
            {
                scanf("%i", &m[k][j]);
            }
        }
        k = 0;
        j = 0;
        r = walk(m, j, k);
        if (r == true)
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