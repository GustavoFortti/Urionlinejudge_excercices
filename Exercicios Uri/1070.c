#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    scanf("%i", &x);

    int i = 0, count = 1;

    while (i < 6)
    {
        if (x % 2 != 0)
        {
            printf("%i\n", x);
            i++;
        }
        x += count;
    }
    return 0;
}