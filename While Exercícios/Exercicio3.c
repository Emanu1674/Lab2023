#include <stdio.h>
int tri(int num){
    int x=1, n=1;
    while(x < num){
        x = n*(n+1)*(n+2);
        n++;
    }
    if(num == x)
        return 1;
    else
        return 0;
}
int main(){
    int n;
    printf(" Informe um número inteiro positivo: ");
    scanf("%d", &n);
    if(tri(n) == 1)
        printf("\n %d é um número triangular.\n", n);
    else
        printf("\n %d NÃO é um número triangular.\n", n);
    return 0;
}