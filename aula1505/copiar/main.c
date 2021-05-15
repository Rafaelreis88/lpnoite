#include <stdio.h>
#include <stdlib.h>

int main(){
    char origem[51];
    char destino[51];
    FILE *fin, *fout;
    char ch;
    printf("Digite o nome do arquivo de origem: \n");
    scanf("%[^\n]s", origem);
    while(getchar() != '\n');
    printf("Digite o nome do arquivo de destino: \n");
    scanf("%[^\n]s", destino);
    //Pegar o arquivo
    fin = fopen(origem, "r");
    if(fin==NULL){
        printf("Impossível abrir o arquivo %s\n", origem);
        exit(1);
    }
    fout = fopen(destino, "w");
    if(fout==NULL){
        printf("Impossível criar o arquivo de destino %s \n", destino);
        exit(2);
    }
    while ((ch=fgetc(fin))!=EOF){
        fputc(ch, fout);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
