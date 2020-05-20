#include <stdio.h>
 
int main() {
    int size, i;
    scanf("%i", &size);
 
    int v[size];
    for (i = 0; i < size; i++)
    {
        int n;
        scanf("%i", &n);
    
        if(n % 2 != 0) v[i] = 1;
        else v[i] = 0;
    }
    for (i = 0; i < size; i++)
    {
        printf("%i\n", v[i]);
    }
    return 0;
}