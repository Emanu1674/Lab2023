#include <stdio.h>

int soma(int m, int n){
    int soma = m;
    while(n > 0){
        soma = soma+(m+1);
        n--;
    }
    return soma;
}

int main(){
    int m, n;
    printf(" Informe dois números inteiros positivos: ");
    scanf("%d%d", &m, &n);
    while(m != 0 && n != 0){
        printf(" A soma dos %d inteiros a partir de %d é de %d\n\n", n, m, soma(m, n));
        printf(" Informe dois números inteiros positivos: ");
        scanf("%d%d", &m, &n); 
    }
    return 0;
}