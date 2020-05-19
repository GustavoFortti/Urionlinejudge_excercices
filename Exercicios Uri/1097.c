#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j;
    
    for (i = 1; i < 10; i += 2)
    {
        for (j = i + 6; j >= i + 4; j--)
        {
            printf("I=%i J=%i\n", i, j);
        }
    }
    return 0;
}