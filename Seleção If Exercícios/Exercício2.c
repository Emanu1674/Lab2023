#include <stdio.h>

int main(){
    int x;
    printf("\nInforme um número: ");
    scanf("%d", &x);
    if (x > 0)
        printf("%d é positivo.", x);
    else if (x < 0)
            printf("%d é negativo.", x);
        else
            printf("%d é nulo.", x);
    return 0;
}