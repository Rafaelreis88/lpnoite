#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1; i<=100; i++){
        if((i * 3) % 18 ==0) continue;
        printf("%d \n", i);
    }
    printf("Sai do for!\n");
    return 0;
}
