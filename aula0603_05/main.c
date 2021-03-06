#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;
    do{
        printf("Digite qual tabuada deseja saber [1 - 10] \n");
        scanf("%d", &x);
    }while(x <=0 || x >=11);
    for(i =1; i<=10; i++){
        printf("[%3d] X [%3d] = [%3d] \n", i, x, i * x);
    }

    return 0;
}
