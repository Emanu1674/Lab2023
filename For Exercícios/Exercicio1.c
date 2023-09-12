#include <stdio.h>

int main(){
    int inicio, fim, cont, soma = 0;
    printf("informe um intervalo de números: ");
    scanf("%d%d", &inicio, &fim);
    for(cont = inicio; cont<=fim; cont++){
        if(cont % 2){
            printf("%d\n", cont);
            soma += cont;
        }
    }
    printf("Soma: %d\n", soma);
    return 0;
}