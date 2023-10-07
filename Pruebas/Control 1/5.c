//Realizar un algoritmo que pruebe si una palabra ingresada por el usuario es o no
//palíndromo. Una palabra es palíndroma cuando se lee igual de derecha a izquierda que de
//izquierda a derecha. Por ejemplo: ana, radar, oso, etc.

#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[100];
    int i, j;
    int esPalindromo = 1;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    int longitud = strlen(palabra);

    for (i = 0, j = longitud - 1; i < j; i++, j--)
    {
        if (palabra[i] != palabra[j])
        {
            esPalindromo = 0;
            break;
        }
    }

    if (esPalindromo)
    {
        printf("%s es un palíndromo\n", palabra);
    }
    else
    {
        printf("%s no es un palíndromo\n", palabra);
    }

    return 0;
}
