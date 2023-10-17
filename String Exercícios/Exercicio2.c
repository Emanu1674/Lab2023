#include <stdio.h>

int main(){
    char C, S[16];
    int cont = 0, V[16];

    printf(" Informe uma string: ");
    fgets(S, sizeof(S), stdin);
    printf(" Informe um caractere: ");
    scanf(" %c", &C);

    for(unsigned long i = 0; i <= sizeof(S); i++){
        if(S[i] == C){
            V[cont] = i;
            cont+=1;
        }
    }

    printf("Os indices onde C aparece em S são:\n");
    for(unsigned long i = 0; i < (unsigned long)cont; i++){
        printf("%d ", V[i]);
    }
    return 0;
}