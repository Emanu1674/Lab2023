#include <stdio.h>

int main(){
    int x;
    printf("\nInforme um número: ");
    scanf("%d", &x);
    if((x % 3) == 0){
        if((x % 7) == 0){
            printf("%d é divisível por 3 e por 7.", x);
        }
    }
    return 0;
}