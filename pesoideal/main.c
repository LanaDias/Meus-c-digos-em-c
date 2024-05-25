#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sexo;
    float altura, pesoideal;

    // Coleta de dados
    printf("Digite sua altura (em metros):\n");
    scanf("%f", &altura);
    printf("Digite seu sexo (1 para feminino ou 2 para masculino):\n");
    scanf("%i", &sexo);

    // Cálculo do peso ideal
    if (sexo == 1)
    {
        pesoideal = 62.1 * altura - 44.7;
        printf("Seu peso ideal é: %.2f kg\n", pesoideal);
    }
    else if (sexo == 2)
    {
        pesoideal = 72.7 * altura - 58;
        printf("Seu peso ideal é: %.2f kg\n", pesoideal);
    }
    else
    {
        printf("Opção de sexo inválida. Digite 1 para feminino ou 2 para masculino.\n");
        return 1; // Encerra o programa com erro
    }

    return 0;
}
