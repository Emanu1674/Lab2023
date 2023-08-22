#include <stdio.h>

int main(){
    int a, b, c;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);
    printf("a = %d  b = %d\n", a, b);
    c=a;
    a=b;
    b=c;
    printf("a = %d  b = %d\n", a, b);
}