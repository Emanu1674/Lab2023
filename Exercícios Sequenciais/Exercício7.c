#include <stdio.h>

int main(){
    float A1, B1, A2, B2, areaTerreno, areaCasa;
    printf("Informe as dimensões totais do terreno e da casa (separados por espaço): ");
    scanf("%f %f %f %f",&A1 ,&B1 ,&A2 ,&B2);
    areaTerreno = A1*B1;
    areaCasa    = A2*B2;
    printf("\nA área livre do terreno é igual a %.2f m².\n\n", areaTerreno - areaCasa);
    printf("O percentual de área livre é de %.2f%%", (areaTerreno - areaCasa)*100/areaTerreno);
}