#include <stdio.h>

int main(){
    int i, mat;
    float n1, n2, n3, media;
    for(i = 1; i <= 10; i++){
        printf(" Informe a matrícula e as notas do %dº aluno (ex: 20117022 7.6 8 4.1): ", i);
        scanf("%d%f%f%f", &mat, &n1, &n2, &n3);
        media = (n1*4 + n2*3 + n3*3)/10;
        printf(" Aluno matrícula %d:\n Notas = %.1f, %.1f, %.1f.\n Média final = %f.\n", mat, n1, n2, n3, media);
        if(media >= 7){
            printf("\n APROVADO\n\n");
        }
        else
        printf("\n REPROVADO\n\n");
    }
    return 0;
}