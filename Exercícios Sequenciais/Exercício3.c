#include <stdio.h>

int main(){
    float base, altura, area;
    
    printf("Informa a base e a altura de um triângulo qualquer: ");
    scanf("%f %f", &base, &altura);
    area = (base*altura)/2;
    printf("A área do triângulo é de %.2f cm²", area);
}