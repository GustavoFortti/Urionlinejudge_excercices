#include <stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);

    (a >= 0 && a <=  25) ?  printf("Intervalo [0,25]\n") :
    (a > 25 && a <=  50) ?  printf("Intervalo (25,50]\n") :
    (a > 50 && a <=  75) ?  printf("Intervalo (50,75]\n") :
    (a > 75 && a <= 100) ?  printf("Intervalo (75,100]\n") : printf("Fora de intervalo\n");

    return 0;
}