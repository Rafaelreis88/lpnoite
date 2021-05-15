#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp;
    char arquivo[51], aluno[51];
    float nota1, nota2, media;
    printf("Digite o nome do arquivo a ser processado: \n");
    scanf("%[^\n]s", arquivo);
    fp = fopen(arquivo, "r");
    if(fp == NULL){
        printf("Impossível abrir o arquivo \n");
        exit(1);
    }
    while(fscanf(fp, "%s %f %f", aluno, &nota1, &nota2)!=EOF){
        media= (nota1 + nota2)/2;
        if(media>=7) {
            printf("%s sua media é %.2f, sua situacao é aprovado\n", aluno, media);
        } else {
            printf("%s sua media é %.2f, sua situacao é reprovado\n",aluno, media);
        }
    }
    fclose(fp);
    return 0;
}
