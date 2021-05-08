//Estrutura sem nome - mas com um tipo definindo
typedef struct {
    int codigo;
    char descricao[61];
    int saldo;
    float valor;
}Produto;

void inicializar_produto(Produto *, int, char *, int, float);

void entrada(Produto *, int);

void saida(Produto *, int);

void imprimir(Produto);


