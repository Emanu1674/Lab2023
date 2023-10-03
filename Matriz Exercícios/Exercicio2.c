#include <stdio.h>

int main(){
    int i, j, V = 1;
    int matriz1[5][5];
    int matriz2[5][5] = { };

    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++){
            matriz1[i][j] = V;
            V++;
        }
        
    for(i = 0; i < 5; i++){
        printf("\n");
        for(j = 0; j < 5; j++){
            printf("%4d", matriz1[i][j]);
            if((i + j) % 2 == 0)
                matriz2[i][j] = matriz1[i][j];
        }
    }
    printf("\n\n");
    for(i = 0; i < 5; i++){
        printf("\n");
        for(j = 0; j < 5; j++)
                printf("%4d", matriz2[i][j]);
    }
    return 0;
}