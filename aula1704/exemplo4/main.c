#include <stdio.h>
#include <stdlib.h>
int main(){
    char s[100];
    char *ptr = s; /* aponta para o 1o. caractere de s*/
    printf("Introduza uma string: ");
    scanf("%[^\n]s", s);
    if (*ptr == '\0') return 0;
    /*Imprimir string normalmente */
    while(*ptr!='\0'){
        printf("[%c] ", *ptr++);
    }
    printf("\n\n");
    /*Imprimir ao contrário */
    ptr--; //por causa do '\0'
    while(ptr>=s)  {/*Enquanto ptr for >=que &s[0] */
        printf("[%c] ", *ptr--);
    }
    ptr++;
    printf("\n\n");
    return 0;
}
