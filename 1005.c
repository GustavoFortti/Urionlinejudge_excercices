#include <stdio.h>

int main()
{
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);

    double MEDIA = ((x * 3.5 / 11) + (y * 7.5 / 11));

    printf("MEDIA = %0.5lf\n", MEDIA);

    return 0;
}