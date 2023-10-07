//Desarrollar un programa que lea los valores de los catetos de un triángulo rectángulo y
//calcule cuál es la hipotenusa, el área y el perímetro del triángulo mediante las siguientes
//expresiones:

#include <stdio.h>
#include <math.h>

int main()
{
    float cateto1 = 4, cateto2 = 8;

    if (cateto1 > 0 && cateto2 > 0)
    {
        float hipotenusa = sqrt((cateto1*cateto1)+(cateto2*cateto2));
        float area = (cateto1*cateto2)/2;
        float perimetro = hipotenusa + cateto1 + cateto2;
        printf("La hipotenusa es: %.2f", hipotenusa);
        printf("\nEl perimetro es: %.2f", perimetro);
        printf("\nEl area es: %.2f", area);
    }

    else
    {
        printf("Triangulo no valido");
        return 1;
    }
    

    return 0;
}
