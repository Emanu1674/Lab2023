#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, discriminante, raiz1, raiz2, parteReal, parteImagin;
    printf("\nInforme os coeficientes a, b e c: ");
    scanf("%lf%lf%lf",&a,&b,&c);

    discriminante = b * b - 4 * a * c;

    //Discriminante é real maior que 0

    if(discriminante > 0){
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Raiz 1 = %.2lf e Raiz 2 = %.2lf", raiz1, raiz2);
    }

    //Discriminante é igual a 0

    else if(discriminante == 0){

    }

    else

    return 0;
}