#include <stdio.h> // entrada e saída
#include <stdlib.h> //função de alocação de memória

int main()
{
    //Variaveis
    const int senha_correta = 1234;
    const int tentativa_max = 3;
    int senha_digitada;
    int tentativa = 0;

    //laço do while para fazer autenticação de senha
    do
    {
        // caso da senha correta
        printf("Senha (num inteiros): ");
        scanf("%i", &senha_digitada);

        if (senha_digitada == senha_correta )
        {

            printf("senha correta! Bem-vindo(a)\n");
            break;// para sair do loop da senha correta
        }
        else // caso esteja incorreta
        {
            tentativa++; //contador de tentativas
            printf("senha incorreta. Tentativas restantes %i.\n", tentativa_max - tentativa);
            /*
            tentativa começa em 0 e tentativa_max tem limite de 3, então quando for realizar
            a primeira tentativa dentro do bloco else ira diminuir 1 da tentativa maxima*/


            if (tentativa >=tentativa_max) //critério de parada
            {
                printf("Numero de tentativas atingido. Acesso negado.\n");
                break;// para sair do loop da senha incorreta
            }
        }
    }
    while(1);// o codigo dentro do bloco só sera executado até que a condição while(1) seja vdd
    return 0;
}
