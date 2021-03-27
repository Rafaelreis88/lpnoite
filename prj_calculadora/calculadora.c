#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"


int somar(int x, int y){
    return x + y;
}


int subtrair(int x, int y){
    return x - y;
}

int multiplicar(int x, int y){
    return x * y;
}


int dividir(int x, int y){
    if(y==0){
        printf("Erro no programa. Impossível dividir inteiro por zero \n");
        exit(1);
    }
    return x / y;
}




