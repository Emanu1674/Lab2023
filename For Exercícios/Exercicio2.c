#include <stdio.h>

int main(){
    int i, n, maior = 0;
    printf("Informe 20 valores: ");
    for(i = 0; i <= 20; i++){
        scanf("%d", &n);
        if(n > maior){
            maior=+n;
        }
    }
    printf("O maior valor é %d", maior);
    return 0;
}