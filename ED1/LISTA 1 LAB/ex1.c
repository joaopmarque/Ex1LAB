#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double a, b, c;
    double d, calculo;
    printf("<<Loteria>>\n");
    printf("Bolao jogador 1 R$: ");
    scanf("%lf", &a);
    printf("Bolao jogador 2 R$: ");
    scanf("%lf", &b);
    printf("Bolao jogador 3 R$: ");
    scanf("%lf", &c);
    printf("Informe o valor do premio: ");
    scanf("%lf", &d);
    calculo= d/((a+b)+c);
    printf("Jogador 1 recebera R$: %.1lf\n", calculo*a);
    printf("Jogador 2 recebera R$: %.1lf\n", calculo*b);
    printf("Jogador 3 recebera R$: %.1lf\n", calculo*c);
    return 0;
}
