#include <stdio.h>

int main(){
    int a, b, c, d;
            
    printf("Informe o peso das 4 bolas: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(c == b){
        if(d == b + c){
            if(a == b + c + d){
                printf("O móbile está esquilibrado!");
            }
            else
            printf("O móbile NÃO está equilibrado!");
        }
        else
        printf("O móbile NÃO está equilibrado!");
    }
    else
    printf("O móbile NÃO está equilibrado!");
}