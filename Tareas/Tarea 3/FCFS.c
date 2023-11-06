#include <stdio.h>

// Estructura para representar un proceso
struct Proceso
{
    int id;       // Identificador del proceso
    int tiempo;   // Tiempo de ejecución del proceso
};

int main()
{
    int n; // Número de procesos
    printf("Ingrese el número de procesos: ");
    scanf("%d", &n);

    struct Proceso procesos[n]; // Crear un arreglo de procesos

    // Ingresar información sobre los procesos
    for (int i = 0; i < n; i++)
    {
        procesos[i].id = i + 1;
        printf("Ingrese el tiempo de ejecución del proceso %d: ", procesos[i].id);
        scanf("%d", &procesos[i].tiempo);
    }

    // Algoritmo FCFS
    printf("\nOrden de ejecución de procesos (FCFS):\n");
    int tiempoTotal = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Proceso %d se ejecuta\n", procesos[i].id);
        tiempoTotal += procesos[i].tiempo;
    }

    printf("\nTiempo promedio de espera: %.2f\n", (float)tiempoTotal / n);

    return 0;
}
