#include <stdio.h>

int main()
{
    double a, b ,c;

    scanf("%lf %lf %lf", &a, &b, &c);
    if ( a == b + c|| b == c + a || c == a + b)
    {
        double area = (( a + b ) * c) / 2;
        printf("Area = %0.1lf\n", area);
    }
    else
    {
        double per = a + b + c;
        printf("Perimetro = %0.1lf\n", per);
    }
    return 0;
}