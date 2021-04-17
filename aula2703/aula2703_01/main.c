#include <stdio.h>
#include <stdlib.h>
//protótipo da função
int elevar(int base, int expoente);

int main()
{
    int x = 2;
    int y = 10;
    printf("%d \n", elevar(x, y));
    return 0;
}

int elevar(int base, int expoente){
    int result = 1;
    for(int i=1; i<=expoente; i++){
        result = result * base;
    }
    return result;
}
