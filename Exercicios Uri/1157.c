#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%i", &n);

    int i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%i\n", i);
        }
    }
    
    return 0;
}
