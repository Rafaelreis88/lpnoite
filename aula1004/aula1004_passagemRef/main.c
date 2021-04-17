#include <stdio.h>
#include <stdlib.h>
void troca(int *a, int *b);
int main()
{
    int x =10;
    int y =20;
    printf("X: %d, Y: %d \n", x, y);
    troca(&x, &y);
    printf("X: %d, Y: %d \n", x, y);
    return 0;
}
void troca(int *a, int *b){
    int aux = *b;
    *b = *a;
    *a = aux;
}
