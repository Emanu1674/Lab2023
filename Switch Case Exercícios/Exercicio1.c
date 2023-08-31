#include <stdio.h>

void reset(){
    printf("\033[0m");
}
void white(){
    printf("\033[0;37m");
}
void red(){
    printf("\033[0;31m");
}
void yellow(){
    printf("\033[0;33m");
}
void purple(){
    printf("\033[0;35m");
}
void cyan(){
    printf("\033[0;36m");
}

int main(){
    int i;
    float a, b, c;

    white();
    printf("Informe três valores: ");
    scanf("%f%f%f", &a,&b,&c);

    cyan();
    printf("\n\n  1       Ordem Crescente\n");
    printf("  2       Ordem Decrescente\n");
    printf("  3       Maior entre os outros dois\n\n");
    //purple();
    //printf("  4       Sobre\n\n");

    white();
    printf("Escolha a operação desejada:\n");
    printf("Opção:  ");
    scanf("%d", &i);

    yellow();
    switch (i) {
        case 1: if(a < b){
                    if(b < c)
                        printf("   %.1f\n   %.1f\n   %.1f", a, b, c);
                    else
                        printf("   %.1f\n   %.1f\n   %.1f", a, c, b);
                }
                else if(b < c){
                    if(c < a)
                        printf("   %.1f\n   %.1f\n   %.1f", b, c, a);
                    else
                        printf("   %.1f\n   %.1f\n   %.1f", b, a, c);
                }
                else if(c < a){
                    if(a < b)
                        printf("   %.1f\n   %.1f\n   %.1f", c, a, b);
                    else   
                        printf("   %.1f\n   %.1f\n   %.1f", c, b, a);
                }
            break;

        case 2: if(a < b){
                    if(b < c)
                        printf("   %.1f\n   %.1f\n   %.1f", c, b, a);
                    else
                        printf("   %.1f\n   %.1f\n   %.1f", b, c, a);
                }
                else if(b < c){
                    if(c < a)
                        printf("   %.1f\n   %.1f\n   %.1f", a, c, b);
                    else
                        printf("   %.1f\n   %.1f\n   %.1f", c, a, b);
                }
                else if(c < a){
                    if(a < b)
                        printf("   %.1f\n   %.1f\n   %.1f", b, a, c);
                    else   
                        printf("   %.1f\n   %.1f\n   %.1f", a, b, c);
                }
            break;
            
        case 3:

        default:    red();
                    printf("\n   Operação inválida!\n");
    }
    reset();
    return 0;
}