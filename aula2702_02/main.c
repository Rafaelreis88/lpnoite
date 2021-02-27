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
    if(sexo=='m'){
        printf("O percentual de aumento foi 15%% \n");
        aumento = salario * 0.15;
        salario+= aumento; //salario = salario + aumento;
    }else{
        printf("O percentual de aumento foi 20%% \n");
        aumento = salario * 0.2;
        salario+= aumento;
    }
    printf("Novo salario: %6.2lf \n", salario);

    return 0;
}
