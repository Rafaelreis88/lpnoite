#include <stdio.h>
#include <stdlib.h>

int main()
{

    char letra = 'a';
    int x = 10;


    printf("Valor %d esta no endereco: %d \n", x, &x);
    printf("Tamanho que ocupa um inteiro: %d bytes \n", sizeof(int));
    printf("Letra %c esta no endereco: %d \n", letra, &letra);
    printf("Tamanho que ocupa um inteiro: %d bytes \n", sizeof(char));

    printf("Tamanho de um short int %d \n", sizeof(short int));
    return 0;
}
