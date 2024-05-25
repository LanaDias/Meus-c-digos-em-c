#include <stdio.h>
#include <stdlib.h>

int main()
{
       int senha;
//pedido de senha
    printf("Senha: ");
    scanf("%i", &senha);


//laço para caso o user digite a senha errada
    while (senha != 1234)
    {
        printf("Digite novamente:");
        scanf("%i", &senha);

    }
    //caso a senha esteja correta
     printf("Bem-vindo(a)! \n");
    return 0;
}
