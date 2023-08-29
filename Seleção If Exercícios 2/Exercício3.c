#include <stdio.h> 

int main(){
    int a, b, c;

    printf("Informe as pontuações dos três competidores (não houve empate)");
    scanf("%d%d%d", &a, &b, &c);

    if ((a > b && a > c)){
        if(b > c){
            printf("A pontuação do vice-campeão é de %d pontos!", b);
        }
        else
            printf("A pontuação do vice-campeão é de %d pontos!", c);
    }
}