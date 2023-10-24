//Desarrollar un programa que pida el ingreso de un texto por teclado e indique cuántas
//vocales y cuántas consonantes tiene dicho texto ingresado.

#include <stdio.h>

int main()
{
    char texto[100];
    int vocales = 0, consonantes = 0;

    printf("Ingresa un texto: ");
    gets(texto);

    for (int i = 0; texto[i] != '\0'; i++)
    {
        char caracter = texto[i];
        
        if ((caracter >= 'a' && caracter <= 'z') || (caracter >= 'A' && caracter <= 'Z'))
        {
            caracter = tolower(caracter);

            if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
            {
                vocales++;
            }

            else
            {
                consonantes++;
            }
        }
    }

    printf("El texto ingresado tiene %d vocales y %d consonantes\n", vocales, consonantes);

    return 0;
}
