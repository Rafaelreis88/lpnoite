#include <stdio.h>
#include <stdlib.h>
int fat(int n);
int main()
{
    int num;
    printf("Digite o numero que deseja saber o fatorial:\n");
    scanf("%d", &num);
    printf("Resultado fatorial de %d => %d \n", num, fat(num));
    return 0;
}

int fat(int n){
    int fatorial = 0;
    if(n == 1) return 1;
    fatorial = n * fat(n-1);
    return fatorial;
}
