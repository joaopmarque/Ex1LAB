#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int peso;
    double altura, imc;

    printf("== IMC ==\n");
    printf("Quantos kilos voce pesa(kg): ");
    scanf("%d", &peso);
    printf("Qual sua altura(m): ");
    scanf("%lf", &altura);
    imc= peso/(altura*altura);
    if(imc<18.5)
    {
        printf("Magreza");
    }
    else if (imc<18.5 && imc<24.9)
    {
        printf("Saudavel");
    }
    else if (imc<25.0 && imc<29.9)
    {
        printf("Sobrepeso");
    }
    else if (imc<30.0 && imc<34.9)
    {
        printf("Obesidade Grau I");
    }
    else if (imc<35.0 && imc<39.9)
    {
        printf("Obesidade Grau II(severa)");
    }

    else{
        printf("Obesidade Grau III (morbida)");
    }
    return 0;
}
