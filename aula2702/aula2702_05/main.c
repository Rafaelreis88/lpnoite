#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario;
    int producao;
    printf("Digite um valor salario: \n");
    scanf("%lf", &salario);
    printf("Digite quantidade de pecas produzidas \n");
    scanf("%d", &producao);
    salario *= producao > 500 ? 1.10 : 1.05;
    printf("Salario novo: %6.2lf \n", salario);

    return 0;
}
