#include <stdio.h>

int main() {
    int x;
    float y;

    printf("Digite um valor inteiro, e um valor real: ");
    scanf("%d %f", &x, &y);

    printf("Variável x = %d\nVariável y = %.2f", x, y);
    return 0;
}
