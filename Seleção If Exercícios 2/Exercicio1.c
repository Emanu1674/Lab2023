#include <stdio.h>

int main(){
    float consumo = 0, valor;

    printf("Informe o total de água consumida em m³: ");
    scanf("%f", &consumo);

    valor = 7;

    if(consumo >= 11 && consumo <= 30)
        valor += (consumo - 10);
        else if(consumo >= 31 && consumo <= 100){
            valor += 20;
            valor += 2*(consumo - 30);
    }       else if(consumo >= 101){
                valor += 20;
                valor += 140;
                valor += 5*(consumo - 100);
    }

    printf("O valor da conta de água é de R$ %.2f", valor);
    return 0;
}