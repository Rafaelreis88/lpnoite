#include <stdio.h>
#include <stdlib.h>
#define DIM 11
int main()
{
    int matriz[DIM][DIM] = {{0}};
    int i, j;
    //gerar tradicional
    /*for(i = 0; i<DIM; i++){
        for(j = 0; j<DIM; j++){
            if(i==j){
                matriz[i][j]=1;
            }
        }
    }*/
    for(i=0; i<DIM; i++)matriz[i][i] = 1;
    //exibir
    for(i = 0; i<DIM; i++){
        for(j = 0; j<DIM; j++){
            printf("[%2d] ", matriz[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
