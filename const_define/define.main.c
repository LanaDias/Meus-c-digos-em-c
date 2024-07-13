#include <stdio.h>
#include <locale.h>

#define MAX 2

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF_8");

    int v = MAX;
    int num[MAX][MAX];
    int i = 0, j = 0;

    // para armazenar dados
    printf("digite 9 números para a matriz:\n");
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf("elemento [%i][%i]", i + 1, j + 1);
            scanf("%i", &num[i][j]);
        }
    }

    // para printar
    printf("matriz %i X %i \n", v, v);
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf("%i ", num[i][j]);
        }
        printf("\n");
    }

    printf("valor do define %i", v);
    
    return 0;
}
