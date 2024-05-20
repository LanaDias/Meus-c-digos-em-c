#include <stdio.h>
#include <stdlib.h>

int main()
{
    // criar calculadora que so calcula números positivos

    float n1, n2, re;
    char operador;

    //dados do user
    printf("Digite dois numeros para serem calculados:\n");
    scanf("%f %f", &n1, &n2);
// operador
    printf("Digite um operador (+, -, *,/):\n");
    scanf(" %c", &operador);

    //tratamento de erro
    if (n1 <0 || n2< 0)
    {
        printf("INVALIDO");
    }

    else
    {
        switch (operador)
        {
        case '+':
            re = n1 + n2 ;
            printf("Resultado da soma: %.2f\n", re);
            break;

        case '-':
            re = n1 - n2;
            printf("subtração: %.2f", re);
            break;
        case '*':
            re = n1 * n2;
            printf("multiplicação: %.2f", re);
            break;
        case '/':
            if (n2 !=0)
            {
                re = n1 / n2;
                printf("divisão: %.2f", re);
            }
            else
            {
                printf("Erro: número inválido.\n");
            }
            break;
        }

    }
    return 0;
}
