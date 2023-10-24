//Ingresar por teclado, tres números flotantes de doble precisión A, B y C y el operador
//aritmético op (suma “+”, resta “-“, producto “*” o división “/”) para realizar el cálculo y
//mostrar el resultado. La impresión del resultado debe ser con cuatro números flotantes.

#include <stdio.h>

int main()
{
    double A, B, C, resultado;
    char op;

    printf("Ingresa el numero A: ");
    scanf("%lf", &A);

    printf("Ingresa el numero B: ");
    scanf("%lf", &B);

    printf("Ingresa el numero C: ");
    scanf("%lf", &C);

    printf("Ingresa el operador:\n+ para suma\n- para resta\n* para producto\n/ para division");
    scanf(" %c", &op);

    if (op == '+')
    {
        resultado = A + B + C;
    }
    
    else if (op == '-')
    {
        resultado = A - B - C;
    }
    
    else if (op == '*')
    {
        resultado = A * B * C;
    }
    
    else if (op == '/')
    {
        if (B != 0 && C != 0)
        {
            resultado = A / (B / C);
        }
        
        else
        {
            printf("No se puede dividir por cero\n");
            return 1;
        }
    }

    else
    {
        printf("Operador no valido\n");
        return 1;
    }

    printf("El resultado es: %.4lf\n", resultado);

    return 0;
}
