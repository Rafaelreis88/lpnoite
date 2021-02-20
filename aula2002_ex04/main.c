#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, result;
    char letra;

    printf("Entre com um dado inteiro:  \n");
    scanf("%d", &valor);
    fflush(stdin);
    printf("Entre com uma letra:  \n");
    //scanf("%c", &letra);
    letra = getchar();

    result = 10 * valor;
    printf("Resultado: %d \n", result);

    printf("Letra digitada: %c \n", letra);
    return 0;
}
