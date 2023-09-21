#include <stdio.h>

int main()
{
    int a, b ,c;
    printf("Ingrese el primer lado: ");
    scanf("%d", &a);
    printf("Ingrese el segundo lado: ");
    scanf("%d", &b);
    printf("Ingrese el tercer lado: ");
    scanf("%d", &c);

    // El Triángulo es válido?
    if (a + b > c && a + c > b && b + c > a)
    {
        // Tipo de Triángulo
        if (a == b && b == c)
        {
            printf("Es un triángulo equilátero\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Es un triángulo isósceles\n");
        }
        else
        {
            printf("Es un triángulo escaleno\n");
        }
    }
    else
    {
        printf("¡No es un triángulo válido!\n");
    }

    return 0;
}