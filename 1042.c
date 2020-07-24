#include <stdio.h>


int main()
{
    int size = 3;
    int v[size], v2[size], i, aux;
    
    for ( i = 0; i < size; i++)
    {
        scanf("%i", &v[i]);
        v2[i] = v[i];   
    }
    int trocou = 1;
    for (; trocou == 1;)
    {
        trocou = 0;
        for ( i = 0; i < size - 1; i++)
        {
            if ( v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                trocou = 1;
            }
        }
        size--;
    }
    
    printf("%i\n%i\n%i\n\n%i\n%i\n%i\n", v[0], v[1], v[2], v2[0], v2[1], v2[2]);
    return 0;
}