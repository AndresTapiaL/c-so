#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;

    printf("Ingrese el primer lado: ");
    scanf("%d", &a);

    printf("Ingrese el segundo lado: ");
    scanf("%d", &b);

    printf("Ingrese el tercer lado: ");
    scanf("%d", &c);

    // El Triángulo es válido?
    if (a + b > c && a + c > b && b + c > a)
    {
        int perimetro = a + b + c;
        float s = perimetro /2.0;

        // Fórmula de Herón
        float area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Perímetro: %d\n", perimetro);
        printf("Semiperímetro: %.2f\n", s);
        printf("Área: %.2f\n", area);
    }
    else
    {
        printf("¡No es un triángulo válido!\n");
    }

    return 0;
}