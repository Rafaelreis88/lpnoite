#include <stdio.h>
#include <stdlib.h>
int main(){
    char Ch;
    Ch='\0';
    while(Ch!='q') {
            Ch= getchar();
    }
    printf("Acabou .. \n");
    return 0;
}
