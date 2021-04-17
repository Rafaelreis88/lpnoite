#include <stdio.h>
int main()
{

    int a = 2, b = 3, c = 2;
    a = a++ + b++ + c++;
    printf("%d \n", a);
    b = b++ + ++a + c;
    printf("%d \n", b);
    printf("\n\n");
    int i = 5;
    while(++i < 20){
        printf("%d \n", i);
    }
    return 0;
}
