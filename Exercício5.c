#include <stdio.h>

int main() {
    char x[15];
    int y;

    printf("Escreva seu nome e sua idade: ");
    scanf("%s %d", x, &y);
    printf("%s\n%d", x, y);
    return 0;
}
