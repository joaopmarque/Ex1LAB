#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i, n=1;
    printf("<< Fatorial >>\n");
    for(i=1; i<=10; i++){
        printf("%d! = ", i);
        n=i*n;
        printf("%d\n", n);
        }
    return 0;
}
