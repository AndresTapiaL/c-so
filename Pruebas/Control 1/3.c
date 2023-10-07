//Crear un programa que permita contar la cantidad de veces que se ingresan números pares
//y la cantidad de números impares hasta que se ingrese un número negativo. El cero no se
//cuenta.

#include <stdio.h>

int main()
{
    int aux, par = 0, impar = 0;

    while (aux >= 0)
    {
        printf("Ingresar número: ");
        scanf("%d", &aux);

        if (aux == 0)
        {
            
        }
        else if (aux % 2 == 0)
        {
            par++;
        }
        else if (aux < 0)
        {
            break;
        }
        else
        {
            impar++;
        }
    }

    printf("La cantidad de impares es: %d", impar);
    printf("\nLa cantidad de pares es: %d", par);

    return 0;
}
