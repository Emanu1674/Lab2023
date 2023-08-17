#include <stdio.h>

int main(){
    int x;
    int y = 0;
    printf("Informe a sua idade: ");
    scanf("%d", &x);

    y = x * 365;

    printf("A sua idade em dias é de %d", y);
    return 0;
}
