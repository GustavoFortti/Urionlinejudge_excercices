#include <stdio.h>

int main()
{
    double v[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    double cash = 0;
    int i, qtd;

    scanf("%i %i", &i, &qtd);

    cash = v[i-1] * qtd;

    printf("Total: R$ %0.2lf\n", cash);
    return 0;
}