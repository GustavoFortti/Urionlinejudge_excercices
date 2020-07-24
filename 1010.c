#include <stdio.h>

int main()
{
    int a1, b1;
    int a2, b2;
    double x, y;


    scanf("%i %i %lf", &a1, &b1, &x);
    scanf("%i %i %lf", &a2, &b2, &y);

    double VALOR = (b1 * x) + (b2 * y) ;

    printf("VALOR A PAGAR: R$ %0.2lf\n", VALOR);

    return 0;
}