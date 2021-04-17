#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Exemplo de comparacao de strings
Ordenacao da saida
*/
int main()
{
    char nome[] = "Ze";
    char outro[] = "Ze";
    if(strcmp(nome, outro)==-1){
        printf("%s e %s \n", nome, outro);
    }else{
        if(strcmp(nome, outro)==1){
            printf("%s e %s \n", outro, nome);
        }else{
            printf("Sao iguais \n");
        }
    }
    return 0;
}
