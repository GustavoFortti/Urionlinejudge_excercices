#include <stdio.h>

int main()
{
    double x, y;

    scanf("%lf %lf", &x, &y);

    x > 0 && y > 0 ? printf("Q1\n") :
    x < 0 && y > 0 ? printf("Q2\n") :
    x < 0 && y < 0 ? printf("Q3\n") :
    x > 0 && y < 0 ? printf("Q4\n") :
    x == 0 && y == 0 ? printf("Origem\n") :
    x == 0 && y != 0 ? printf("Eixo Y\n") : printf("Eixo X\n");

    return 0;
}