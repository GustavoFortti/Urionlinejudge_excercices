#include <stdio.h>
#include <stdbool.h>
#define size 5

typedef struct coordinates
{
    int x;
    int y;
    bool visited;
}CO;


int main()
{
    int mat[size][size];
    int i, j;
        

    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size; j++)
        {
            scanf("%i", mat[i][j]);
        }
    }

    i = 0;
    j = 0;
    bool x = search(mat, i, j);
}

bool search(int mat[size][size], int i, int j)
{
    
    if ( i >= 0 && i < 4 && j >= 0 && j < 4)
    {
        if ( mat[i + 1][j] == 0)
        {
            search(mat, i + 1, j);
        }
        if ( mat[i][j + 1] == 0)
        {
            search(mat, i, j + 1);
        }
        if ( mat[i - 1][j] == 0)
        {
            search(mat, i - 1, j);
        }
        if ( mat[i][j - 1] == 0)
        {
            search(mat, i, j - 1);
        }
    }

}