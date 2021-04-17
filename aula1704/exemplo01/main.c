#include <stdio.h>
#include <stdlib.h>
//Exercício didático para entendimento de ponteiro
int main(){
    int x = 10;
    float y = 12.6;
    printf("Valor de x: %d e valor de y: %.2f \n", x, y);
    printf("Endereco de x: %d e endereco de y: %d \n", &x, &y);
    //ponteiro para y
    float * ptr_y = &y;
    int * ptr_x = &x;
    printf("Endereco de x: %d e endereco de y: %d \n", ptr_x, ptr_y);
    printf("Valor de x: %d e valor de y: %.2f \n", *ptr_x, *ptr_y);
    return 0;
}
