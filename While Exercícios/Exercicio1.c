#include <stdio.h>

int primo(int n){
    int i, primo = 0;
    if(n < 0){
        printf("O número informado é inválido!!");
        return 0;
    }
    if(n == 1 || n == 0){
        return 0;
    }
    for(i = 2; i <= n / 2; ++i){
        if(n % i == 0) {
            primo = 1;
            break;
        }
    }
    return primo;
}

int main(){
    int num, primos = 0;
    printf(" Informe um número inteiro positivo: ");
    scanf("%d", &num);
    while(num != 0){
        primos += primo(num);
        printf(" Informe um número inteiro positivo: ");
        scanf("%d", &num);
    }
    printf("\n A quantidade de números primos é de %d.", primos);
    return 0;
}