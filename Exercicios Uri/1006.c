#include <stdio.h>

int main()
{
    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);

    double MEDIA = ((x * 2 / 10) + (y * 3 / 10) + (z * 5 / 10));

    printf("MEDIA = %0.1lf\n", MEDIA);

    return 0;
}