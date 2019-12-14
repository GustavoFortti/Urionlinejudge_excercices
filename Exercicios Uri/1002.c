#include <stdio.h>

int main()
{
    double x, y = 3.14159;
    scanf("%lf", &x);

    double area = y * x * x;

    printf("A=%0.4lf\n", area);

    return 0;
}