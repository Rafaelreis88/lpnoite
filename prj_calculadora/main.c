#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"
int main()
{
    int valor1, valor2;
    int opc;
    printf("Digite o valor 1: \n");
    scanf("%d", &valor1);
    printf("Digite o valor 2: \n");
    scanf("%d", &valor2);
    //menu dentro de um loop
    do{
        printf("Menu Principal da Calculadora\n");
        printf("1.. Para Somar \n");
        printf("2.. Para Subtrair \n");
        printf("3.. Para Multiplicar \n");
        printf("4.. Para Dividir \n");
        printf("9.. Para SAIR \n");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("Resultado: %d \n", somar(valor1, valor2));
                break;
            case 2:
                printf("resultado: %d \n", subtrair(valor1, valor2));
                break;
            case 3:
                printf("resultado: %d \n", multiplicar(valor1, valor2));
                break;
            case 4:
                printf("resultado: %d \n", dividir(valor1, valor2));
                break;
            case 9:
                printf("Programa finalizado \n");
                break;
            default:
                printf("Opção inválida \n");
        }
    }while(opc!=9);
    return 0;
}
