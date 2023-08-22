#include <stdio.h>

int main(){
    float m, k;
    printf("Informe a velocidade em m/s: ");
    scanf("%f", &m);
    k = m*3.6;
    printf("A velocidade em k/h é igual a %.1f", k);
    return 0;
}