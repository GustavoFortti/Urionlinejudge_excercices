#include <stdio.h>

int main()
{
    int begin, end;
    int t1;


    scanf("%i %i", &begin, &end);

    if ( begin != end)
    {
        if ( begin > end)
        {
            t1 = end - (begin - 24);
        }
        else
        {
            t1 = end - begin;
        }    
    }
    else
    {
        t1 = 24;
    }
    
    printf("O JOGO DUROU %i HORA(S)\n", t1);

    return 0;
}