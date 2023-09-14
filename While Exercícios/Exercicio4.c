#include <stdio.h>

int main(){
    int chico = 150, juca = 110;
    int cont;
    while(juca < chico){
        chico += 2;
        juca += 3;
        cont++;
    }
    printf(" Serão necessários %d anos para Juca ser maior que Chico.\n", cont);
    return 0;
}