#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, discriminante, raiz1, raiz2, parteReal, parteImagin;
    printf("\nInforme os coeficientes a, b e c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    discriminante = b * b - 4 * a * c;

    //Discriminante real e raízes diferentes

    if(discriminante > 0){
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Raiz 1 = %.2lf e Raiz 2 = %.2lf", raiz1, raiz2);
    }

    //Discriminante real e raízes iguais

    else if(discriminante == 0){
        raiz1 = raiz2 = -b / (2 * a);
        printf("Raiz 1 = Raiz 2 = %.2lf;", raiz1);
    }

    //Raízes não reais

    else {
        parteReal = -b / (2 * a);
        parteImagin = sqrt(-discriminante) / (2 * a);
        printf("Raiz 1 = %.2lf+%.2lfi e Raiz 2 = %.2f-%.2fi", parteReal, parteImagin, parteReal, parteImagin);
    }

    return 0;
}