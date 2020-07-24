#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x2, x1, x;

    scanf("%lf %lf %lf", &a, &b, &c);

    x =  pow(b,2) - (4 * a * c);

    x1 = ( - b + sqrt(x) ) / (2 * a);
    x2 = ( - b - sqrt(x) ) / (2 * a);

    if ( a == 0 || x < 0 )
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }
    
    return 0;
}