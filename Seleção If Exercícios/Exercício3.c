#include <stdio.h>
#include <math.h>

int main(){
    double x;
    printf("\nInforme um número: ");
    scanf("%lf", &x);
    if (x > 0){
        printf("%.2lf", 1/x);
    }
    else
        printf("%.2lf", fabs(x));
    return 0;
}