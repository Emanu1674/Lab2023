#include <stdio.h>
 
int main(){
    float n1, n2, p1, p2, mp = 0;
    printf("Informe 2 notas e 2 pesos (N P N P): ");
    scanf("%f %f %f %f", &n1, &p1, &n2, &p2);

    mp = (n1*p1 + n2*p2) / (p1 + p2);
    printf("A média ponderada é de: %.2f", mp);
    return 0;
}