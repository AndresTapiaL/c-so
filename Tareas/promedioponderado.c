#include <stdio.h>

int main()
{
    float n1, n2, n3, n4;

    printf("Ingrese la primera nota: ");
    scanf("%f", &n1);

    printf("Ingrese la segunda nota: ");
    scanf("%f", &n2);

    printf("Ingrese la tercera nota: ");
    scanf("%f", &n3);

    printf("Ingrese la cuarta nota: ");
    scanf("%f", &n4);

    float promedio = (n1 + n2 + n3 + n4) / 4.0;

    printf("El promedio simple de las notas es: %.2f\n", promedio);

    return 0;
}
