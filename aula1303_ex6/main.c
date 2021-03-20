#include <stdio.h>
#include <stdlib.h>
#define DIM 10
int main()
{
    int va[DIM], vb[DIM];
    for(int i=0; i<DIM; i++){
        printf("Digite um dado: \n");
        scanf("%d", &va[i]);
        vb[i]= (i % 2 == 0) ? va[i]*5 : va[i]+5;
    }
    printf("Vetor a: ");
    for(int i=0; i<DIM; i++){
        printf("[%3d] ", va[i]);
    }
    printf("\nVetor b: ");
    for(int i=0; i<DIM; i++){
        printf("[%3d] ", vb[i]);
    }
    printf("\n");
    return 0;
}
