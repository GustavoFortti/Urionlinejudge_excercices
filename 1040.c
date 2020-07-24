#include <stdio.h>

int main()
{
    float v[4], ex = 0;
    int i;
    for ( i = 0; i < 4; i++)
    {
        scanf("%f", &v[i]);
    }
    float media = ((v[0] * 0.2) + (v[1] * 0.3) + (v[2] * 0.4) + (v[3] * 0.1));

    if (media >= 7)
    {
        printf("Media: %0.1f\nAluno aprovado.\n", media);
    }
    else
    {
        if ( media < 5)
        {
            printf("Media: %0.1f\nAluno reprovado.\n", media);
        }
        else
        {
            printf("Media: %0.1f\nAluno em exame.\n", media);
            scanf("%f", &ex);
            printf("Nota do exame: %0.1f\n", ex);
            (ex + media) / 2 >= 5 ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");
            printf("Media final: %0.1f\n", (ex + media) / 2);
        }
    }
    return 0;    
}
