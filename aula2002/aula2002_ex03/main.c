#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int y = 3;
    float result = x + y;
    printf("Resultado: %f \n", result);
    result = x - y;
    printf("Resultado: %f \n", result);
    result = x * y;
    printf("Resultado: %f \n", result);
    //cast de dado (promover)
    result = (float)x / y;
    printf("Resultado: %f \n", result);
    result = x % y;
    //cast de um dado maior para um menor
    printf("Resultado: %d \n", (int)result);
    return 0;
}
