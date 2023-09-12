#include <stdio.h>

int main(){
    int i, j;
    float S = 0;
    for(i = 1, j = 1; i <= 99 && j <= 50; i+=2, j++)
        S = S+(float)i/j;
    printf("\n S = %.2f", S);
    return 0;
}