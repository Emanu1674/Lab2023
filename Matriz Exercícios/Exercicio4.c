#include <stdio.h>

int main(){
    int i, j;
    int mat[2][2] = {7, 4, 1, -2};
    int AD[2];
    int CB[2];

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(i == j)
                AD[i] = mat[i][j];
            else
                CB[j] = mat[i][j];
        }
    }

    for(i=0;i<2;i++){
        

    return 0;
}