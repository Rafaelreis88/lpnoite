#include <stdio.h>
#include <stdlib.h>
//variavel global
int x = 19;

int main()
{
    //variaveis locais

    int x=0, c = 10, z=0, d = 20;
    printf("Valor d: %d \n", d);
    printf("Valor de soma:  % d \n", soma(99));
    return 0;
}

//variavel como argumento de uma função
int soma(int x)
{
    int z = 12 + x;
    return z;
}
