#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alvo = 5000;


    int * p_alvo = &alvo;

    int chacara = 3000;

    int ** p_chacara = &p_alvo;

    printf("Local novo numero: %d \n", **p_chacara);

    return 0;
}
