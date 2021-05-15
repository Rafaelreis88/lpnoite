#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int cont = 0;
    char nome[51];
    printf("Digite o nome do arquivo a ser aberto: \n");
    scanf("%[^\n]s", nome);
    FILE *fp = fopen(nome, "r");
    if(fp != NULL){
        printf("Arquivo aberto. Dados abaixo: \n");
        while ((ch=fgetc(fp))!=EOF){
            if(ch=='\n') cont++;
            putchar(ch);

        }
        printf("\n-----------------\n");
        printf("Total de produtos: %d \n", cont);
    }else{
        printf("Arquivo inexistente...\n");
        exit(0);
    }

    fclose(fp);
    printf("Fechamos o aquivo\n");
    return 0;
}
