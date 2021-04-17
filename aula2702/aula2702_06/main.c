#include <stdio.h>
#include <stdlib.h>

int main()
{
    //opcao 9 - finaliza o programa
    int opcao;
    do{
        system("cls");
        printf("Menu de Calculo \n");
        printf("1.. Soma \n");
        printf("2.. Substracao \n");
        printf("3.. Divisao \n");
        printf("4.. Multiplicacao \n");
        printf("9.. SAIR \n");
        printf("Digite sua opcao: \n");
        scanf("%d", &opcao);
        switch(opcao){
        case 1:
            printf("Chama a funcao somar \n");
            system("pause");
            break;
        case 2:
            printf("Chama a funcao subtracao \n");
            system("pause");
            break;
        case 3:
            printf("Chama a funcao divisao \n");
            system("pause");
            break;
        case 4:
            printf("Chama a funcao multiplicacao \n");
            system("pause");
            break;
        case 9:
            break;
        default:
            printf("Opcao invalida");
            system("pause");
        }
    }while(opcao != 9);
    printf("Acabou o programa \n");
    return 0;
}
