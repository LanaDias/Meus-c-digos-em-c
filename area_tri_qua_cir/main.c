#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //programa para calcular área do triângulo, retângulo e circulo usando switch case

    //var
    float area,altura,base,pi;
    int op;

    //dados
    printf("Opções:\n");
    printf("1- triangulo\n2-Retangulo\n3-círculo");//opções disponiveis
    printf("\nqual das areas quer descobrir? (digite o numero correspondete a cada opção) : ");
    scanf("%i",&op);

    //casos
    switch (op)
    {
    //inicio primeiro caso
    case 1:
        printf("\nArea do Triangulo é dada por ; (base * altura) / 2"); //informa ao user a escolha e formula usada

        //dados para a formula
        printf("\ndigite a base:");
        scanf("%f",&base);
        printf("\nDigite a altura:");
        scanf("%f",&altura);

        //calculo
        area = (base * altura)/2;

        //exibição do resultado
        printf("\na area do triangulo e: %.2f M\n", area);

        break; //finaliza o primeiro caso

    //inicio do segudo caso

    case 2:
        printf("\nArea do Retangulo e dada por : base * altura\n"); //informa ao user a escolha e formula usada

        //dados
        printf("\nDigite a base:");
        scanf("%f",&base);
        printf("\nDigite a altura:");
        scanf("%f",&altura);

        //calculo
        area = base * altura;

        //exibição
        printf("\n A area do retangulo e : %.2f M\n", area);
        break; //finalização do segundo caso

    //inicio ao ultimo caso
    case 3:
        printf("\nArea do circulo e dado por; area = pi * raio^2\n");//informa ao user a escolha e formula usado
        printf("obs: Sera utilizado 3,14 para valor de pi\n");//informação importante ao user

        //dados para calculo
        printf("\nDigite valor do raio:");
        float raio; // nova var
        scanf("%f", &raio);
        //dando valor a uma variavel
        pi =3.14;

        //calculo
        area = pi * pow(raio,2);

        printf("\nA area do circulo e: %.2f m\n ", area);
        break;

    }
    return 0;
}
