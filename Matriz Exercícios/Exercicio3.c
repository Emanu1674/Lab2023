#include <stdio.h>

int main(){
    int i, j, V = 1;
    int matriz1[2][3];
    int matriz2[3][2];

    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++){
            matriz1[i][j] = V;
            V++;
        }
    
    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)
            matriz2[j][i] = matriz1[i][j];

    for(i = 0; i < 2; i++){
        printf("\n");
        for(j = 0; j < 3; j++)
            printf("%4d", matriz1[i][j]);
    }
    printf("\n\n");
    for(i = 0; i < 3; i++){
        printf("\n");
        for(j = 0; j < 2; j++)
            printf("%4d", matriz2[i][j]);
    }

    return 0;
}