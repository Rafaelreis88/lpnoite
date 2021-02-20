#include <stdio.h>
#include <stdlib.h>
#define PI  3.14286

int main()
{
    double raio, perimetro, area;
    printf("Digite o raio da circunferencia: \n");
    scanf("%lf", &raio);
    perimetro = 2 * PI * raio;
    area = PI * (raio * raio);
    printf("Valor do perimetro: %9.3f \n", perimetro);
    printf("Valor da area.....: %9.3f \n", area);
    return 0;
}
