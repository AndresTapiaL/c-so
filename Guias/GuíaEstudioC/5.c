#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4;
    float promedio;

    printf("Ingrese la primera nota: ");
    scanf("%f", &nota1);

    // Validación de la primera nota
    if (nota1 < 1.0 || nota1 > 7.0)
    {
        printf("Error: La nota debe estar en el rango de 1.0 a 7.0\n");
        return 1;  // Salir del programa con un código de error
    }

    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);

    // Validación de la segunda nota
    if (nota2 < 1.0 || nota2 > 7.0)
    {
        printf("Error: La nota debe estar en el rango de 1.0 a 7.0\n");
        return 1;
    }

    printf("Ingrese la tercera nota: ");
    scanf("%f", &nota3);

    // Validación de la tercera nota
    if (nota3 < 1.0 || nota3 > 7.0)
    {
        printf("Error: La nota debe estar en el rango de 1.0 a 7.0\n");
        return 1;
    }

    printf("Ingrese la cuarta nota: ");
    scanf("%f", &nota4);

    // Validación de la cuarta nota
    if (nota4 < 1.0 || nota4 > 7.0)
    {
        printf("Error: La nota debe estar en el rango de 1.0 a 7.0\n");
        return 1;
    }

    // Calcular el promedio
    promedio = (nota1 + nota2 + nota3 + nota4) / 4.0;

    // Mostrar el resultado
    printf("El promedio simple de las notas es: %.2f\n", promedio);

    return 0;  // Programa terminado con éxito
}
