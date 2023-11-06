//Desarrollar un programa en C que utilice hilos y mutexes para
//calcular la suma de los números del 0 al 99,999. Cada hilo
//debe ejecutar esta tarea en una sección crítica, lo que
//significa que un solo hilo puede realizar esta operación a la
//vez. El objetivo es garantizar la exclusividad en el acceso a
//la sección crítica utilizando mutexes.
//Por último ejecutar el código y observar cómo los hilos
//calculan la suma de manera concurrente pero segura.
//Asegurarse de que los resultados sean correctos y que se
//eviten las condiciones de carrera

#include <stdio.h>
#include <pthread.h>

pthread_mutex_t lock;

//Ejecutar los hilos
void *Hilos()
{
    int resultado = 0;

    pthread_mutex_lock(&lock);

    //Sección Critica
    for (int i = 0; 1 < 1000; i++)
    {
        resultado += i;
    }
    printf("El resultado de la operacion con hilos es. Resultado Suma: %d\n", resultado);

    //Liberando acceso a la sección critica

    pthread_mutex_unlock(&lock);

    return 0;
}

// Crear y manejar los hilos
int main()
{
    pthread_t hilo1, hilo2;
    
    pthread_mutex_init(&lock, NULL);

    pthread_create(&hilo1, NULL, Hilos, NULL);
    pthread_create(&hilo2, NULL, Hilos, NULL);

    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);

    pthread_mutex_destroy(&lock);
}