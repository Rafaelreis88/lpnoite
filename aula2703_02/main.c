#include <stdio.h>
#include <stdlib.h>
//Retorne 1 se for valida ou 0 se for uma data invalida
int checarData(int dia, int mes, int ano);
//Retorna 1 se o ano é bissexto ou 0 se não for.
int checarBissexto(int ano);

int main()
{
    int dia = 29;
    int mes = 02;
    int ano = 2016;

    int resultado = checarData(dia, mes, ano);
    resultado ? printf("Data valida \n") : printf("Data Invalida\n");
    return 0;
}

int checarData(int dia, int mes, int ano){
    if( (dia<=0) || (dia>31) ) return 0;

    if( (mes<=0) || (mes > 12) ) return 0;

    if(ano < 0) return 0;

    if((mes == 2 || mes ==4 || mes==6 || mes==9 || mes == 11) && dia ==31) return 0;

    if((mes == 2) && dia > 28){
        if(dia == 30) return 0;
        if(dia == 29) {
            int ret = checarBissexto(ano);
            if(ret == 0) return 0;
        }
    }

    return 1;

}


int checarBissexto(int ano){
    if((ano % 100==0) && (ano% 400 !=0) ) return 0;
    if(ano % 4 != 0) return 0;
    return 1;
}
