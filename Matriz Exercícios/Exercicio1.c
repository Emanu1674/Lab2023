#include <stdio.h>

int main(){
    int i, j, V = 0;
    int matriz[10][10];

    for(i = 0; i < 10; i++)
        for(j = 0; j < 10; j++){
            matriz[i][j] = V;
            V++;
        }
        
    for(i = 0; i < 10; i++){
        printf("\n");
        for(j = 0; j < 10; j++){
            if(i + j != 9)
                printf("%4d", matriz[i][j]);
            else
                printf("%4d", -1);
        }
    }
    return 0;
}