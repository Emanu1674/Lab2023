#include <stdio.h>
#include <stdbool.h>

bool collision(){
    int RetA_x0, RetA_x1, RetA_y0, RetA_y1;
    int RetB_x0, RetB_x1, RetB_y0, RetB_y1;
    printf("Informe as coordenadas x e y do primeiro retângulo (x0 x1 y0 y1)");
    scanf("%d%d%d%d", &RetA_x0, &RetA_x1, &RetA_y0, &RetA_y1);
    printf("Informe as coordenadas x e y do segundo retângulo (x0 x1 y0 y1)");
    scanf("%d%d%d%d", &RetB_x0, &RetB_x1, &RetB_y0, &RetB_y1);

    // Função retorna 0 (não há colisão) se as cordenadas informadas
    // forem inválidas.
    if(RetA_x0 > 0 || &RetA_y0 > 0){
        printf("COORDENADA INVÁLIDA\nRETORNANDO VALOR PADRÃO");
        return 0;
    }if(&RetA_x1 > RetA_x0 || &RetA_y1 > &RetA_y0){
        printf("COORDENADA INVÁLIDA\nRETORNANDO VALOR PADRÃO");
        return 0;
    }if(&RetA_x1 > 1000000 || &RetA_y1 > 1000000){
        printf("COORDENADA INVÁLIDA\nRETORNANDO VALOR PADRÃO");
        return 0;
    }

    if((x0 < x2) && (y0 && y1))
        return 1;
}

int main(){
    printf("%d", collision());
    return 0;
}