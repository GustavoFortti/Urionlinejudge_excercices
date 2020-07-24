#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%i", &n);

    int x = 7;
    if (n >= 101)
    {
        x += (n-100) * 5;
        n -= (n-100);
    }
    if (n >= 31)
    {
        x += (n-30) * 2;
        n -= (n-30);
    }
    if (n >= 11)
    {
        x += (n-10);
    }
    printf("%i\n", x);    
    
    return 0;
}
