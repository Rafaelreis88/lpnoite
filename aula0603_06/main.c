#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1; i<=100; i++){
        printf("%d \n", i);
        if((i * 3) % 18 ==0) break;
    }
    printf("Sai do for!\n");
    return 0;
}
