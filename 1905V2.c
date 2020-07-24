#include <stdio.h>
#define size 5

int walk(int m[size][size], int j, int k, int win);

int main()
{
    int i, j, k, T = 0;
    int win = 0;
    int m[size][size];
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
        win = walk(m, j, k, win);

        if ( win == 1 )
        {
            printf("COPS\n");
            win = 0;
        }
        else
        {
            printf("ROBBERS\n");
        }
    }
    return 0;
}

int walk(int m[size][size], int j, int k, int win)
{
    if ( win == 0)
    {
        printf("true-1\n");
    }
    if ( win == 0 && m[0][0] >= -2)
    {
        if ( win == 1)
        {
            printf("true1\n");
        }
        int x = 0, y = 0, z = 0, w = 0;
        m[j][k]--;
        if ( j == 4 && k == 4)
        {
            win = 1;
            printf("true\n");
        }
        if ( win == 1)
        {
            printf("true1\n");
        }
        else
        { 
            if ( win == 1)
            {
                printf("true2\n");
            }
            if ( j < size && k < size && j >= 0 && k >= 0)
            {
                for ( x = m[j+1][k], y = m[j-1][k], z = m[j][k+1], w = m[j][k-1]; x <= 0 || y <= 0 || z <= 0 || w <= 0; x++, y++, z++, w++)
                {
                    if ( x == 0 && j + 1 < size && j != 4 && k != 4)
                    {
                        walk(m, j+1, k, win);
                    }
                    if ( y == 0 && j - 1 >= 0 && j != 4 && k != 4)
                    {
                        walk(m, j-1, k, win);
                    }
                    if ( z == 0 && k + 1 < size && j != 4 && k != 4)
                    {
                        walk(m, j, k+1, win);
                    }
                    if ( w == 0 && k - 1 >= 0 && j != 4 && k != 4)
                    {
                        walk(m, j, k-1, win);
                    }
                }
            }
        }
        if ( win == 1)
        {
            printf("true3\n");
        }
    }
    if ( win == 1)
    {
        printf("true4\n");
    }
    //retornu errado https://www.guj.com.br/t/resolvido-problemas-com-instrucao-return-recursividade/114613
    return 1;
}
