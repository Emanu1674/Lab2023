#include <stdio.h>

int main() {
    int x;
    float y;

    printf("Digite um valor inteiro, e um valor real: ");
    scanf("%d %f", &x, &y);

    printf("Vari�vel x = %d\nVari�vel y = %.2f", x, y);
    return 0;
}
