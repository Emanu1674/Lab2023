#include <stdio.h>
 
int main(){
    int x;
    printf("Digite um número inteiro entre 100 e 999: ");
    scanf("%d", &x);
    x /= 10;
    x %= 10;
    printf("O algarismo das dezenas é %d", x);
    return 0;
}