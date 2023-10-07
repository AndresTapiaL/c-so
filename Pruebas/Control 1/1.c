//Escribir un programa en el que se pregunte al usuario por una frase y una letra, donde
//muestre por pantalla el número de veces que aparece la letra en la frase.
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];
    char letra;
    int contador = 0;

    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Ingrese una letra: ");
    scanf("%c", &letra);

    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == letra)
        {
            contador++;
        }
    }

    printf("La letra %c aparece %d veces en la frase\n", letra, contador);

    return 0;
}
