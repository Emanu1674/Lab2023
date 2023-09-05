#include <stdio.h>

void ipva(int m, int p){
    p = p%10;
    if(p == 0)
        p = 10;

    if(p < m)
        printf("O IPVA vence em %d meses.", 12-p);
    else if(p == m)
        printf("O IPVA vence este mês!");
    else
        printf("O IPVA vence daqui a %d meses", p - m);
}

int main(){
    int mes, placa;

    printf("Informe o mês atual, e uma placa de veículo de 4 dígitos: ");
    scanf("%d%d", &mes, &placa);
    ipva(mes, placa);
    return 0;
}