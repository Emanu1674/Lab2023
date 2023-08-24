#include <stdio.h>

int main(){
    int X, Y;
    printf("\nInforme dois valores inteiros: ");
    scanf("%d %d", &X, &Y);
        //printf("%d", (X % Y));
    if ((X % Y) == 0)
        printf("\nOs dois números são múltiplos.");
    else
        printf("\nOs dois números não são múltiplos.");
    
    return 0;
}