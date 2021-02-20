#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i = 0; i < 256; i++){
        printf("Numero na tabela ascii: %3d ---> %c\n", i, i);
    }
    char letra = 100 + 1;
    printf("Letra: %c \n", letra);
    return 0;
}
