#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5] = {3, 5, 7, 9, 11};
    for(int i=0; i<5 ; i++){
       printf("[%d] => [%d] \n", i, vetor[i]);
    }
    return 0;
}
