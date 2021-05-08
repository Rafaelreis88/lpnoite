#include <string.h>
#include <stdio.h>
#include "produto.h"

void inicializar_produto(Produto * ptr, int codigo, char * descricao, int saldo, float valor){
    ptr->codigo = codigo;
    strcpy(ptr->descricao, descricao);
    ptr->saldo = saldo;
    ptr->valor = valor;
}

void entrada(Produto * ptr, int quantidade){
    if(quantidade > 0){
        ptr->saldo += quantidade;
    }else{
        printf("Quantidade invalida para movimentação \n");
    }
}

void saida(Produto * ptr, int quantidade){
    if(quantidade <= ptr->saldo){
        ptr->saldo -= quantidade;
    }else{
        printf("Quantidade insuficiente no estoque \n");
    }
}

void imprimir(Produto prod){
    printf("===========================================\n");
    printf("Código do produto: %d \n", prod.codigo);
    printf("Descrição do produto: %s \n", prod.descricao);
    printf("Saldo atual (qtd estoque) : %d \n", prod.saldo);
    printf("Valor atual do produto: %.2f \n", prod.valor);
}
