#include <stdio.h>
#include <stdlib.h>

int myLen(char *str);
int main() {
    char palavra[51];
    printf("Digite uma palavra \n");
    scanf("%[^\n]s", palavra);
    printf("Tamanho da palavra: %d \n", myLen(palavra));
    return 0;
}
int myLen(char *str){
    char *p_i = str;
    char *p_d = str;
    while(*p_d != '\0'){
        p_d++;
    }
    int t = p_d - p_i;
    return t;
}
