#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a, b, c, d, a1, b1, c1, d1, valor;

    printf("== Convertor de numeros binarios ==\n");
    printf("Digite o 1o.bit: ");
    scanf("%d", &a);
    if(a==1)
    {
        a1 =pow(2,3);
    }
    else if(a==0)
    {
        a1 = a*0;
    }
    printf("Digite o 2o.bit: ");
    scanf("%d", &b);
    if(b==1)
    {
        b1 =  pow(2,2);
    }
    else if(b==0)
    {
        b1 = b*0;
    }
    printf("Digite o 3o.bit: ");
    scanf("%d", &c);
    if(c==1)
    {
        c1 = pow(2,1);
    }
    else if(c==0)
    {
        c1 = c*0;
    }
    printf("Digite o 4o.bit: ");
    scanf("%d", &d);
    if(d==1)
    {
        d1 = pow(2,0);
    }
    else if(d==0)
    {
        d1 = 0*0;
    }
    valor= ((a1+b1)+c1)+d1;
    printf("O numero binario %d%d%d%d corresponde ao numero decimal ", a, b, c, d);
    printf("%d\n", valor);
    return 0;
}
