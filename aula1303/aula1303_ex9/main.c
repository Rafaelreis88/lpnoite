#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nomecompleto[101]= {'\0'};
    char nome[51];
    char sobrenome[51];
    fflush(stdin);
    printf("Digite seu nome: \n");
    gets(nome);
    fflush(stdin);
    printf("Digite seu sobrenome: \n");
    gets(sobrenome);
    puts(nome);
    puts(sobrenome);
    strcat(nomecompleto, nome);
    strcat(nomecompleto, " ");
    strcat(nomecompleto, sobrenome);
    puts(nomecompleto);
    return 0;
}
