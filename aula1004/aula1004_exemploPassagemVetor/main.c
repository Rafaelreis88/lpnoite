#include <stdio.h>
#include <stdlib.h>
void ordenar(int v[], int t);
void imprimir(int v[], int t);
void troca(int *a, int *b);
int main()
{
    int vetor[10] = {3,4,5,1,2,3,7,8,9,6};
    imprimir(vetor, 10);
    ordenar(vetor, 10);
    imprimir(vetor,10);
    return 0;
}
void ordenar(int v[], int t){
    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            if(v[i]<v[j]){
                troca(&v[i], &v[j]);
            }
        }
    }
}
void imprimir(int v[], int t){
    printf("Dados do vetor: \n");
    for(int i=0; i<t; i++){
        printf("[%2d] ", v[i]);
    }
    printf("\n\n");
}
void troca(int *a, int *b){
    int aux = *b;
    *b = *a;
    *a = aux;
}
