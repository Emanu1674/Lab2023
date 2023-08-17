#include <stdio.h>
 
int main(){
    int x, d, m, a ;
    printf("Digite uma data no formato DDMMAA: ");
    scanf("%d", &x);
    d = x / 10000;
    m = (x / 100) % 100;
    a = x % 100;
    printf("O dia, mês e ano são: \n%d\n%d\n%d", d, m, a);
    return 0;
}