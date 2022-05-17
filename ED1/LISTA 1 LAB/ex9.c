#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    char nome[20];
    printf("<< Vetor de char >>\n");
    printf("Digite um nome: ");
    scanf("%s", &nome);
    printf("O nome digitado eh: %s",strupr(nome));
    return 0;
}
