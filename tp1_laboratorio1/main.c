#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void main (void)
{
    int calculadora;

    int flag = 0;
    float a, b;
    char c;

    printf ("\nIntroduce una opcion:\n");
    printf ("1.- Ingresar primer operador\n");
    printf ("2.- Ingresar segundo operador\n");
    printf ("3.- Calcular las operaciones\n");
    printf ("4.- Informar los resultados\n");
    printf ("5.- Salir\n");

    do
    {
        printf ("\nSu opcion: ");
        scanf("%d",&calculadora);
        switch(calculadora)
        {

        case 1:
            printf("\nIntroduce el primer numero: ");
            scanf("%f", &a);
            break;

        case 2:
            printf("\nIntroduce el segundo numero: ");
            scanf("%f", &b);
            break;

        case 3:
            a, b, sumar(a, b);
            a, b, restar(a, b);
            a, b, multiplicar(a, b);
            a, b, dividir(a, b);
            a, b, factorialA(a);
            a, b, factorialB(b);
            flag = flag + 1;
            break;

        case 4:
            printf("a)La suma es: %.1f\n\n", sumar(a, b));
            printf("b)La resta es: %.1f\n\n", restar(a, b));
            if (flag == 1 && b != 0)
            {
                printf("c)La division es: %.2f\n\n", dividir (a, b));
            }
            else
            {
                if (flag == 1 && b == 0)
                {
                    printf("c)ERROR, No se puede dividir por 0");
                }
            }
            printf("d)La multiplicacion es: %.1f\n\n", multiplicar(a, b));
            printf("e)El factorial de A es: %d y el factorial de B es %d\n\n", factorialA(a),factorialB(b));

            if (flag == 0)
            {
                printf("ERROR, NO SE CALCULARON LAS OPERACIONES, PRESIONE 3 PARA CALCULAR.");
            }
            break;

        case 5:
            break;

        default:
            printf("\nPor favor Introduce una opcion valida...");
        }
    }
    while (calculadora != 5);

    return 0;
}











































