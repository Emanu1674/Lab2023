#include <stdio.h>

int main(){
    float horasValor, horasTotal, bruto, liquido;
    float IR, INSS, CS;
    printf("Informe o valor da Hora e o total de horas/mês do funcionário: ");
    scanf("%f %f", &horasValor, &horasTotal);
    bruto = horasTotal*horasValor;
    IR   = 0.11*bruto;
    INSS = 0.08*bruto;
    CS   = 0.05*bruto;
    liquido = bruto - (IR + INSS + CS);
    printf("\n Salário Bruto:   R$ %.2f\n Salário Líquido: R$ %.2f\n\n", bruto, liquido);
    printf("  Descontos:\n\n IR:   R$ %.2f\n INSS: R$ %.2f\n CS:   R$ %.2f", IR, INSS, CS);
}