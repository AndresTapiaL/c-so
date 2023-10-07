//Realizar un algoritmo que produzca por pantalla lo siguiente:

#include <stdio.h>

int main()
{
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t->\t100\t110\t120\t130\t140\t150\n", count+1);
        count++;
    }
    
    return 0;
}
