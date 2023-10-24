#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;
    float promedioPonderado;

    // Solicitar y validar la Nota 1
    printf("Ingrese la Nota 1: ");
    scanf("%f", &nota1);

    if (nota1 < 1.0 || nota1 > 7.0)
    {
        printf("Nota 1 fuera del rango válido.\n");
        return 1; // Salir del programa con un código de error
    }

    // Solicitar y validar la Nota 2
    printf("Ingrese la Nota 2: ");
    scanf("%f", &nota2);

    if (nota2 < 1.0 || nota2 > 7.0)
    {
        printf("Nota 2 fuera del rango válido.\n");
        return 1; // Salir del programa con un código de error
    }

    // Solicitar y validar la Nota 3
    printf("Ingrese la Nota 3: ");
    scanf("%f", &nota3);
    
    if (nota3 < 1.0 || nota3 > 7.0) {
        printf("Nota 3 fuera del rango válido.\n");
        return 1; // Salir del programa con un código de error
    }

    // Calcular el promedio ponderado
    promedioPonderado = (nota1 * 0.4) + (nota2 * 0.3) + (nota3 * 0.3);

    // Determinar el resultado del estudiante y mostrarlo por pantalla
    if (promedioPonderado >= 4.95)
    {
        printf("El estudiante se exime de la asignatura.\n");
    }
    else if (promedioPonderado < 3.95)
    {
        printf("El estudiante ha reprobado la asignatura.\n");
    }
    else
    {
        printf("El estudiante va a examen.\n");
    }

    return 0;
}
