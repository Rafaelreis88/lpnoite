#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[61];
    fflush(stdin);
    printf("Digite o nome completo: \n");
    gets(nome);
    printf("%s\n", nome);
    puts(nome);
    for(int i=0; i< strlen(nome); i++){
        printf("%c \n", nome[i]);
    }
    return 0;
}
