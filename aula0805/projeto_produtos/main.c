#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

void clear_buffer(){
    char c;
	while((c = getchar()) != '\n');
}

int main(){
    Produto ** vet;
    int n;
    printf("Digite a quantidade a ser alocada: \n");
    scanf("%d", &n);
    vet = (Produto**) malloc(sizeof(Produto*) * n);

    int pos = 0;
    int opcao;
    do {
        printf("Menu Principal \n");
        printf("1.. Cadastrar \n");
        printf("2.. Entrada em Estoque \n");
        printf("3.. Saída do Estoque \n");
        printf("4.. Listar Inventário \n");
        printf("9.. Sair\n");
        scanf("%d", &opcao);
        switch(opcao){
            int proc;
            case 1:
                if(pos >= n){
                    printf("Cadastros finalizados \n");
                    break;
                }
                vet[pos] = (Produto *) malloc(sizeof(Produto));
                Produto x;
                printf("Digite o codigo do produto: \n");
                scanf("%d", &x.codigo);
                clear_buffer();
                printf("Digite a descrição do produto: \n");
                scanf("%[^\n]s", x.descricao);
                clear_buffer();
                printf("Digite o saldo atual: \n");
                scanf("%d", &x.saldo);
                printf("Digite o valor do produto: \n");
                scanf("%f", &x.valor);
                inicializar_produto(vet[pos], x.codigo, x.descricao, x.saldo, x.valor);
                pos++;
                break;
            case 2:

                printf("Digite o código a ser encontrado: \n");
                scanf("%d", &proc);
                for(int i=0; i<pos; i++){
                    if(proc == vet[i]->codigo){
                        int qtd;
                        printf("Digite a quantidade a dar entrada: \n");
                        scanf("%d", &qtd);
                        entrada(vet[i], qtd);
                        break;
                    }
                }
                break;
            case 3:
                printf("Digite o código a ser encontrado: \n");
                scanf("%d", &proc);
                for(int i=0; i<pos; i++){
                    if(proc == vet[i]->codigo){
                        int qtd;
                        printf("Digite a quantidade a dar saída: \n");
                        scanf("%d", &qtd);
                        saida(vet[i], qtd);
                        break;
                    }
                }
                break;
            case 4:
                for(int i=0; i<pos; i++){
                    imprimir(*vet[i]);
                }
        }

    }while(opcao != 9);

    return 0;
}
