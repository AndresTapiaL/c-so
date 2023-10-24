//Escribir un bucle para pedir un número entero al usuario con controles de errores. El
//número ha de estar comprendido en el intervalo [0,10). En caso de que no esté, se imprimirá
//un mensaje de error y se volverá a pedir el número de nuevo, continuando así hasta que el
//usuario introduzca un número que esté dentro del intervalo solicitado.

#include <stdio.h>

int main()
{
    int aux = 0, num;

    while (aux != 1)
    {
        printf("Ingresar numero: ");
        scanf("%d", &num);

        if (num < 0 || num >= 10)
        {
            printf("Numero fuera de intervalo, ingresar otro nuevamente\n");
        }

        else
        {
            aux = 1;
        }
    }

    return 0;
}
