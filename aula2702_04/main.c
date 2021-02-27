#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, aumento;
    char sexo;
    int producao;
    printf("Digite um valor salario: \n");
    scanf("%lf", &salario);
    printf("Digite quantidade de pecas produzidas \n");
    scanf("%d", &producao);
    fflush(stdin);
    printf("Digite sexo [m- masculino ou f - feminino] ? \n");
    sexo = getchar();
    //dar um aumento maior para as mulheres - 20%, para os homens 15%
    if((sexo=='m' || sexo=='M') &&(producao > 1000)){
        printf("O percentual de aumento foi 20%% \n");
        printf("Parabens pela producao \n");
        aumento = salario * 0.20;
        salario+= aumento; //salario = salario + aumento;
        printf("Novo salario: %6.2lf \n", salario);
    }else{
        printf("Nao atende aos requisitos para o aumento \n");
    }


    return 0;
}
