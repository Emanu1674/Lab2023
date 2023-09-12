#include <stdio.h>

int main(){
    int i, n, primo = 0;
    printf("Informe um inteiro positivo: ");
    scanf("%d", &n);
    if(n < 0){
        printf("O número informado é inválido!!");
        return 0;
    }
    if(n == 1 || n == 0){
        printf("\n %d não é primo", n);
        return 0;
    }
    for(i = 2; i <= n / 2; ++i){
        if(n % i == 0) {
            primo = 1;
            break;
        }
    }
    if(primo == 0)
        printf(" %d é primo", n);
    else
        printf(" %d não é primo", n);
    return 0;
}