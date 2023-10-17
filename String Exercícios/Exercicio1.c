#include <stdio.h>

int main(){
    char str1[16], str2[16];
    char c1, c2;

    printf(" Informe uma palavra: ");
    fgets(str1, sizeof(str1), stdin);
    printf(" Informe 2 caracteres: ");
    scanf(" %c", &c1);
    scanf(" %c", &c2);

    for(unsigned long i = 0; i <= sizeof(str1); i++){
        if(str1[i] == c1)
            str2[i] = c2;
        else 
            str2[i] = str1[i];
    }
    printf(" As duas strings são:\n ");
    puts(str1);
    printf(" ");
    puts(str2);
    return 0;
}