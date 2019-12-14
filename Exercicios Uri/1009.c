#include <stdio.h>

int main()
{
    char name[100];
    double x, y;


    scanf("%s %lf %lf", name, &x, &y);

    double SALARY = x + (y * 0.15) ;

    printf("TOTAL = R$ %0.2lf\n", SALARY);

    return 0;
}