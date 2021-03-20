#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10, b = 20;
    int vetor[3] = {0};
    int c = 30, d = 40;
    int count = 0;
    int num;
    do{
        printf("a %d, b %d, c%d, d %d, num %d, count %d\n", a, b, c, d, num, count);
        printf("Entre com um numero ( -5 p/ terminar): \n");
        scanf("%d",&num);
        vetor[count] = num;
        count++;
    }while(vetor[count - 1]!= -5 && count != 3);

    for(int i=0; i<6; i++){
         printf("[%d] => [%d] \n", i, vetor[i]);
    }

    return 0;
}
