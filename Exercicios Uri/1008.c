#include <stdio.h>

int main()
{
    int x, y; 
    double z;
    scanf("%i %i %lf", &x, &y, &z);

    double SALARY = y * z;

    printf("NUMBER = %i\n", x);
    printf("SALARY = U$ %0.2lf\n", SALARY);

    return 0;
}