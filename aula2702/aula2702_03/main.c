#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, aumento;
    char sexo;
    printf("Digite um valor salario: \n");
    scanf("%lf", &salario);
    fflush(stdin);
    printf("Digite sexo [m- masculino ou f - feminino] ? \n");
    sexo = getchar();
    //dar um aumento maior para as mulheres - 20%, para os homens 15%
    switch(sexo){
    case 'M':
    case 'm':
        printf("Aumento de 15%% \n");
        aumento = salario * 0.15;
        salario+= aumento;
        break;
    case 'F':
    case 'f':
        printf("Aumento de 20%% \n");
        aumento = salario * 0.20;
        salario+= aumento;
        break;
    default:
        printf("Erro, sexo deve ser masculino ou feminino \n");
        return 1;
    }
    printf("Novo salario: %6.2lf \n", salario);
    return 0;
}
