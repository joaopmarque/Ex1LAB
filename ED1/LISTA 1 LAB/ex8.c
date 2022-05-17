#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n1,n2,n3,n4,n5;
    double total,media,desvio;
    printf("<< Media e desvio-padrao >>\n");
    printf("Digite o valor 1: ");
    scanf("%d", &n1);
    printf("Digite o valor 2: ");
    scanf("%d", &n2);
    printf("Digite o valor 3: ");
    scanf("%d", &n3);
    printf("Digite o valor 4: ");
    scanf("%d", &n4);
    printf("Digite o valor 5: ");
    scanf("%d", &n5);
    media=((n1+n2)+(n3+n4)+n5)/5.0;
    desvio = (((pow(n1-media,2)+pow(n2-media,2))+(pow(n3-media,2)+pow(n4-media,2)))+pow(n5-media,2));
    total= sqrt(desvio/(5-1));
    printf("A media eh %.1lf e o desvio-padrao eh ",media);
    printf("%.13lf",total);
    return 0;
}
