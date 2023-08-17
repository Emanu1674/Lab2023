#include <stdio.h>
 
int main(){
    int r, t, d;
    printf("Digite a razão de uma Progressão Aritmética e o seu primeiro termo ([Razão] [Termo]): ");
    scanf("%d %d", &r, &t);

    d = t + (r * 9);

    printf("O décimo termo da série é %d", d);
    return 0;
}