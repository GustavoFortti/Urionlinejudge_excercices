#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, t;
    scanf("%i %i", &n, &t);

    int i, h[n];
    char nome[100][n];
    for (i = 0; i < n; i++)
    {
        scanf("%s %i", nome[i], &h[i]);
    }
        
    for (i = 0; i < n; i++)
    {
        printf(" > %s <\n", nome[i]);
    }

    return 0;
}



    // int j, melhor, x[n];
    // for (i = 0; i < n; i++)
    // {
    //     melhor = 0;
    //     for (j = 1; j < n; j++)
    //     {
    //         if (h[melhor] < h[j])
    //         {
    //             melhor = j;
    //         }
    //     }
    //     x[i] = melhor;
    //     h[melhor] = -1;
    // }

    // int k = 0;
    // char resp[20][n];
    // for (i = 0; i < t; i++)
    // {
    //     printf("Time %i\n", i + 1);
    //     for (j = (0 + i); j < n; j += t)
    //     {
    //         int size = strlen(nome[x[j]]);
    //         printf("%i %s\n", size, nome[x[j]]);
            
    //         // strcpy(resp[k], nome[x[j]]);
    //         k++;
    //     }
    //     printf("\n");
    // }
    
    // char aux[20];
    // for (i = 1; i < n; i++)
    // {
    //     for ( j = 1; j < n; j++)
    //     {
    //         // printf("%i > %i\n", x[j - 1], x[j]);
    //         if (strcmp(resp[j - 1], resp[j]) > 0)
    //         {
    //             strcpy(aux, resp[j]);
    //             strcpy(resp[j], resp[j - 1]);
    //             strcpy(resp[j - 1], aux);
    //         }
    //     }
    // }

    
