#include <stdio.h>
#include <stdlib.h>

//BP - > legibilidade
int main()
{
    int z = 9;
    //laco comum
    for(int i = 0; i < 10; i++){
      printf("Vez %d \n", i);
    }

    //laco infinito (nao devemos fazer isso)
    for(int j=0; ; j++){
        z = j + z;
        printf("%d ", z);
        if(z >= 300) break;
        printf("%d ", j);
    }
    return 0;
}
