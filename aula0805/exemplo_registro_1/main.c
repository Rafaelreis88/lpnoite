#include <stdio.h>
#include <stdlib.h>
#include "funcoes.c"
struct produto {
    int codigo;
    char descricao[61];
    int saldo;
    float valor;
};
typedef struct produto Produto;

void clear_buffer(){
    char c;
	while((c = getchar()) != '\n');
}

int main() {
   /* Produto produto1;
    printf("Digite o codigo do produto: \n");
    scanf("%d", &produto1.codigo);
    clear_buffer();
    printf("Digite a descrição do produto: \n");
    scanf("%[^\n]s", produto1.descricao);
    clear_buffer();
    printf("Digite o saldo atual: \n");
    scanf("%d", &produto1.saldo);
    printf("Digite o valor do produto: \n");
    scanf("%f", &produto1.valor); */

    Produto produtos[2]; //Livremente - mas e o CUSTO de MEMÓRIA ?
    for(int i=0; i<2; i++){
        printf("Digite o codigo do produto: \n");
        scanf("%d", &produtos[i].codigo);
        clear_buffer();
        printf("Digite a descrição do produto: \n");
        scanf("%[^\n]s", produtos[i].descricao);
        clear_buffer();
        printf("Digite o saldo atual: \n");
        scanf("%d", &produtos[i].saldo);
        printf("Digite o valor do produto: \n");
        scanf("%f", &produtos[i].valor);
    }

    //Apresentar os dados
    for(int i=0; i< 2; i++){
         printf("Dados do produto: \n");
        printf("Código do produto: %d \n", produtos[i].codigo);
        printf("Descrição do produto: %s \n", produtos[i].descricao);
        printf("Saldo em estoque: %d \n",produtos[i].saldo);
        printf("Valor do produto: %.2f \n", produtos[i].valor);
    }
}

