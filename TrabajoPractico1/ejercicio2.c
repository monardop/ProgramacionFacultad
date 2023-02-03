/* Desarrollar una función que permita 
calcular el combinatorio de dos números */
#include <stdio.h>

double combinatoria(int m, int n);
int factorial(int);


int main()
{
    printf("Primero, este da error.\n");
    double primero = combinatoria(4,9);

    printf("Combinatoria entre 10 y 5: %.f \n", combinatoria(10, 5));

    system("pause");
    return 0;
}

double combinatoria(int m, int n)
{
    if(m >= n && n >= 0)
    {
        double combinatorio;

        combinatorio = factorial(m) 
            / (factorial(n)*factorial(m-n));

        return combinatorio;
    }
    else
    {
        printf("Error.\n");
        return 0;
    }
}

int factorial(int n)
{
    int fact = 1;
    for(n; n > 1; n--)
    {
        fact *= n;
    }
    return fact;
}