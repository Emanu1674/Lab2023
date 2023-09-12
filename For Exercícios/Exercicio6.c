#include <stdio.h>

int main(){
    int i, N, F=0, t1=0, t2=1;
    printf("Informa o valor N se termos que deseja imprimir: ");
    scanf("%d", &N);
        for(i = N; i <= N; i++){
            printf(" %d \n", t1 + t2);
            F = t1 + t2;
            t1 += t2;
            t2 = F;
        }
    return 0;
}