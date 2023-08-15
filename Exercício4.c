#include <stdio.h>

int main() {
    char x[10];

    printf("Escreva uma palavra: ");
    scanf("%s", x);
    printf("%s\n\"%s\"", x, x);
    return 0;
}
