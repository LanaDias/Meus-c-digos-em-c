#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variáveis
    float f, c ;
    int con;

    do// laço para que o user possa usar o código varias vezes ate que precione 3 para sair
    {
        //coleta de dados
        printf("_______________________________________________\n");
        printf("Digite qual das opções quer:\n");
        printf("1- Fahrenheit | 2- Celsius | 3- para sair| ");
        scanf("%i", &con);
        printf("_______________________________________________\n");

        //tratamento de erro
        if (con != 1 && con != 2 && con !=3)
        {
            printf("Opção inválida.\n");
        }
        //caso de acordo com a opção do user
        else
        {
            switch (con)
            {
            //Fahrenheit para Celsius
            case 1:
                printf("\nConversão de Fahrenheit para Celsius, digite a temperatura:");
                scanf("%f", &f);
                c = (5.0 / 9.0) * (f - 32.0);
                printf("A temperatura em Celsius é: %.2f\n", c); //exibição
                break;

            //Celsius para Fahrenheit
            case 2:
                printf("Conversão de Celsius para Fahrenheit, digite a temperatura: \n");
                scanf("%f", &c);
                f = (c * 1.8) + 32;
                printf("A temperatura em Fahrenheit é: %.2f\n", f);//exibição
            }
        }
    }
    while (con !=3);
    printf("Programa Ecerrado :)\n");



    return 0;
}
