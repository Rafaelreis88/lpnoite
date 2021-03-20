#include <stdio.h>
#include <stdlib.h>
#define DIM 2

int main()
{
    int vetor[DIM];
    for(int i=0; i<DIM; i++){
        printf("Entre com o dado da posicao [%d] \n", i+1);
        scanf("%d", &vetor[i]);
    }
    int soma = 0;
    for(int i=0; i<DIM; i++){
        soma += vetor[i];
    }
    printf("Soma dos valores entrados: %d \n", soma);
    return 0;
}
